#!/usr/bin/bash

# Mute MacBook Chime

## Make "chime" value mutable

sudo chattr -i /sys/firmware/efi/efivars/SystemAudioVolume-7c436110-ab2a-4bbb-a880-fe41995c9f82

## Change "chime" value to "muted"

sudo printf "\x07\x00\x00\x00\x00" > /sys/firmware/efi/efivars/SystemAudioVolume-7c436110-ab2a-4bbb-a880-fe41995c9f82

## Make "chime" value immutable again

sudo chattr +i /sys/firmware/efi/efivars/SystemAudioVolume-7c436110-ab2a-4bbb-a880-fe41995c9f82

printf "\n Now you don't have startup chime anymore!\n"

