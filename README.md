# Monorail V2

Version 2 is based on the RP2040 and has encoder positions on ESC, 1, and 6.

Plate files made up of the same outlines as are found in the Trashman Wiki, and enough permutations have been tested to be confident in their functionality.

More plate files can be found at https://www.minivanplate.xyz/

The "Combined" plates have support for all of the layouts from all three PCBs.

Vial firmware was built on this commit of the NCKiser fork of Vial, based on QMK v0.18 : https://github.com/NCKiser/vial-nckiser/commit/2a0371c2ef1b1343f7dda704ad11ff06da6e896c


# Build Guide

## What you need:
 - PCB (included)
 - Base (included)
 - Plate (included)
 - Hardware (included)
 - Philips (+) Screwdriver
 - Needle-nose Pliers (optional)

![IMG_1208](https://github.com/KiserDesigns/Monorail/assets/96897936/0dd34419-0b35-4413-9979-ee9bc8c59180)

## Step 1: Standoffs
### There is the option to use Hull-mount, Tray-mount, or both at the same time!
### For Hull-mount, use brass washers on either side of the plate so the screw and 10mm standoff clamp firmly to the half-hole.
![IMG_1211](https://github.com/KiserDesigns/Monorail/assets/96897936/57d4bb6e-9f15-4295-8403-07826e56dbb9)
### Start with holding the screw and washer the top side, and then placing the washer and twisting on the standoff from the other side.
![IMG_1212](https://github.com/KiserDesigns/Monorail/assets/96897936/ed85c0d6-ad70-43f1-aed8-75ec9071cc98)
![IMG_1213](https://github.com/KiserDesigns/Monorail/assets/96897936/34bee921-76cd-44b9-871b-4d80d0488a28)
![IMG_1215](https://github.com/KiserDesigns/Monorail/assets/96897936/47b0c31c-7706-4d61-b8c5-7efcd5d950be)
### Repeat this for the other 3 Hull-mount standoffs.
![IMG_1216](https://github.com/KiserDesigns/Monorail/assets/96897936/24925621-c171-485f-9b3c-5b8ad7c4f676)
### For Tray-mount, attach the 5mm standoffs and washers to the base first, using the washer on the standoff side, not the screw side.
![IMG_1225](https://github.com/KiserDesigns/Monorail/assets/96897936/046fd2f7-f56b-445c-8dda-4aad5c787b20)
![IMG_1227](https://github.com/KiserDesigns/Monorail/assets/96897936/fdf18033-a766-4a65-8bfb-968d0d9859f0)
![IMG_1228](https://github.com/KiserDesigns/Monorail/assets/96897936/0279b760-3fa5-45e1-8ad8-1b3a9af34e6d)
### Repeat this for all 8 Tray-mount point, or exclude certain points based on your desired typing feel.
![IMG_1229](https://github.com/KiserDesigns/Monorail/assets/96897936/24a6cb49-f48d-47e7-8dec-06ef43ff6616)

## Step 2: PCB Assembly
### If using Tray-mount, it makes sense to screw the PCB to the base first.
![IMG_1230](https://github.com/KiserDesigns/Monorail/assets/96897936/dd9687da-a895-4066-a3ed-5516b5a3cbb8)
### Snap switches into the PCB through the plate, starting with the center and outside corners.
![IMG_1231](https://github.com/KiserDesigns/Monorail/assets/96897936/c8aca3a8-820b-4626-8691-ddfc70a0e53b)
### This is what the final stackup should look like:
![IMG_1232](https://github.com/KiserDesigns/Monorail/assets/96897936/b82afb3d-27fb-4085-8851-1b439a2f78e6)

## Step 3: Optional Part Removal
### The top half-numrow can be optionally removed for a 4-row layout or to fit in standard minivan cases.
### The half-numrow on the PCB and Base can be broken by hand:
![IMG_1233](https://github.com/KiserDesigns/Monorail/assets/96897936/06ac57e3-59ed-41b5-bc9e-495f21654ab9)
![IMG_1234](https://github.com/KiserDesigns/Monorail/assets/96897936/5a65d587-870d-479d-aba6-e2e4f5d33aba)
![IMG_1235](https://github.com/KiserDesigns/Monorail/assets/96897936/8d07952f-7973-4f75-8c0b-93c834acf67f)
![IMG_1236](https://github.com/KiserDesigns/Monorail/assets/96897936/3900a92c-ab6f-4eea-8f66-4c1ad4d81539)
![IMG_1237](https://github.com/KiserDesigns/Monorail/assets/96897936/ca1b1043-917c-4153-abd1-6148bff61770)

### The plate will need to be separated using needle-nose pliers:
![IMG_1238](https://github.com/KiserDesigns/Monorail/assets/96897936/ecf6ce30-3679-4c53-8998-230acbd99205)
![IMG_1239](https://github.com/KiserDesigns/Monorail/assets/96897936/d4ce7bba-48de-4f1d-a05d-eae44cc8150e)
![IMG_1240](https://github.com/KiserDesigns/Monorail/assets/96897936/34ee3f91-8aa2-4aff-943a-c6857341457f)
![IMG_1241](https://github.com/KiserDesigns/Monorail/assets/96897936/85ea8ffe-1e2e-4f90-b019-34e67f09c8dc)

### If not using Hull-mount, the extra tabs can be removed using needle-nose pliers:
![IMG_1244](https://github.com/KiserDesigns/Monorail/assets/96897936/f86ab1c6-7788-4557-bfe8-b26db145acc0)
![IMG_1245](https://github.com/KiserDesigns/Monorail/assets/96897936/d78dc435-3957-4855-8ff1-dd7d44134d55)
![IMG_1247](https://github.com/KiserDesigns/Monorail/assets/96897936/a1431ab3-6e80-4add-b987-137c33c4018f)
![IMG_1248](https://github.com/KiserDesigns/Monorail/assets/96897936/4e6ce179-df30-421d-bb43-8b40cbec9024)

### If fitting the PCB into a V4N4G0N case, the right USB port may need to be removed.
![IMG_1253](https://github.com/KiserDesigns/Monorail/assets/96897936/be3e2b15-118c-4aad-a4a7-c4c124b1a1e9)
![IMG_1254](https://github.com/KiserDesigns/Monorail/assets/96897936/51038cc9-a416-4fb7-8b88-bc009a054ac3)
![IMG_1255](https://github.com/KiserDesigns/Monorail/assets/96897936/acf5e848-563c-435a-8686-f84cf88f325c)
![IMG_1256](https://github.com/KiserDesigns/Monorail/assets/96897936/e664b981-79dd-4151-bd32-ffeb248cb7c7)

### This will take a bit of force, and the USB port might be damaged while removing. That is okay.
![IMG_1257](https://github.com/KiserDesigns/Monorail/assets/96897936/0905b8c6-dbe9-42d0-b093-0420598028d0)

## Stem 4: Firmware
### Vial firmware is pre-flashed on each PCB, and the default layout is hosted here.


