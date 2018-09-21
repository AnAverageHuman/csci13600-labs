#!/usr/bin/env Rscript

library(dplyr)
library(lubridate)
library(readr)

muh_URL <- "https://data.cityofnewyork.us/api/views/zkky-n5j3/rows.csv?accessType=DOWNLOAD"

muh_csv <-
  read_csv(muh_URL, col_types = cols(Date = col_date("%m/%d/%Y"))) %>%
  select("Date", "Ashokan East Storage", "Ashokan East Elevation",
         "Ashokan West Storage", "Ashokan West Elevation") %>%
  filter(between(Date, ymd(20160101), ymd(20161231))) %>%
  arrange(Date)

muh_csv %>%
  transform(Date = format(Date, "%m/%d/%Y")) %>%
  write_tsv("Current_Reservoir_Levels.tsv")
