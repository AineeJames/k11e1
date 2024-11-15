# k11e1 (11 keys, 1 encoder)

![frontside picture](./images/frontside.jpg)
![backside picture](./images/backside.jpg)
![layer leds picture](./images/layer_leds.jpg)

## 🌟 Key Features:
- **VIA Support**: Easily customizable through VIA, making it simple to remap keys without needing to recompile firmware.
- **RGB Lighting**: Adds a visually appealing touch and can be configured to display different lighting effects.
- **QMK**: Provides handy QMK functionalities, such as layer switching and boot/reset options.
- **Active Layer Indicators**: Great for visualizing which layer is currently active, especially useful in a compact macro pad setup.

## 🔧 Hardware:
- **Switches**: Kailh Choc (Low Profile) gives a slim and sleek look while maintaining responsiveness.
- **MCU**: Waveshare RP2040-Zero is a solid choice, offering a lot of power and flexibility for your macros.
- **Keycaps**: Chocfox PBT in frosted transparent black to let lighting shine through.

## ⚙️  Setup:
1. Assemble PCB
2. Plug in USB while holding the boot button
3. Drag `./firmware/k11e1_via.uf2` onto the boot drive.
4. Go to `usevia.app` and enable the design tab in `settings` > `Show Design tab`
5. Naviagate to the `DESIGN` tab and upload `./src/qmk_k11e1/via.json`
6. Click the `CONFIGURE` tab and then authorze the device (you should see the k11e1 show up here)
7. Done! Time to configure.

## 📝 BOM:
| **Part**                       | **Quantity** | **Description**                                                                                                                  |
|--------------------------------|--------------|----------------------------------------------------------------------------------------------------------------------------------|
| KAILH Choc Switches            | 11           | Choose whatever flavor you like.                                                                                                 |
| Encoder                        | 1            | [PEC11S](https://www.digikey.com/en/products/detail/bourns-inc/PEC11S-929K-S0015/3534254)                                        |
| Diodes                         | 12           | [1N4148W](https://www.digikey.com/en/products/detail/diodes-incorporated/1N4148W-7-F/814371)                                     |
| Layer LED's (Bottom Entry)     | 4            | [XZCWS45S9](https://www.digikey.com/en/products/detail/sunled/XZCWD45S-9/4901912)                                                |
| RGB Reverse Mount LED's        | 11           | [SK6812MINI-E](https://www.digikey.com/en/products/detail/adafruit-industries-llc/4960/14302512) (pack of 10)                    |
| Waveshare RP2040-Zero          | 1            | I got mine from amazon.                                                                                                          |
| Logic Level Shifter            | 1            | [TXB0101DBVR](https://www.digikey.com/en/products/detail/texas-instruments/TXB0101DBVR/1534254)                                  |
|                                |              |                                                                                                                                  |
| Keycaps                        | 11           | Choose your own or user the ones I used: [link](https://www.amazon.com/dp/B0CP28G897/ref=twister_B0CP283588?_encoding=UTF8&th=1) |
| Encoder Knob                   | 1            | Choose or use [this](https://www.amazon.com/dp/B0D7H3LSRV?ref=ppx_yo2ov_dt_b_fed_asin_title&th=1) one.                           |
| Rubber Feet                    | 4            | Any 13mm diameter rubber feet will work!                                                                                         |
| M2x5mm Screws                  | 8            |                                                                                                                                  |
| M2x6mm Female-Female Standoffs | 4            |                                                                                                                                  |
