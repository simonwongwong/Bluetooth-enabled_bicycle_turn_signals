# Bluetooth-enabled bicycle turn signal
A turn signal for bikes!

After commuting to work every day on my bicycle, I decided that I needed a better way to signal my turns. Sticking my arms out can be dangerous, especially if you're riding downhill in the rain (as is common in Vancouver).

I had recently got an Arduino and wanted to embark on my first project, so I decided to kill two birds with one stone!

I wanted something waterproof that I can use in the rain, and something detachable so it wouldn't get stolen, it needed to be detachable/wireless.

The plan was to have a couple of switches embedded into the handlebars (for power and for turn signal), use a Bluetooth transmitter (HC-05) for communication, and have an Arduino Nano to control it all with an 18650 lithium-ion battery (controlled with a 134N3P chip) for power. On the other end of the bike, there are two 8x8 LED matrices controlled by MAX7219 controllers, a Bluetooth receiver (HC-05), an ATMEGA328P chip to control all the components and an 18650 (or 14500) lithium-ion battery for power. I also added a Qi wireless charging receiver to charge the battery without opening the lights enclosure.

Here's a YouTube video of it in action:

[![YouTube video thumbnail](https://img.youtube.com/vi/5KMD66OUnJ0/0.jpg)](https://www.youtube.com/watch?v=5KMD66OUnJ0)

If you don't like my boring arrows, make any indicator animation you want using my 8x8 LED byte generator found on my [LED_byte_matrix_generator repo](https://github.com/simonwongwong/LED_byte_matrix_generator)

Full parts and tools requirements can be found on the [Arduino Project Hub page](https://create.arduino.cc/projecthub/simonwongwong/bluetooth-enabled-bicycle-turn-signal-2f4f5d)

Diagram for handlebar/controller:

![Inside the handlebars](pictures/handlebars_wiring.jpg)

Note: Bluetooth module, Arduino Nano and PCB separated from battery by a long ~1m cable

Image of handlebar batteries:

![handlebar batteries](pictures/handlebar_battery.jpg)

Diagram for lights enclosure:

![lights wiring](pictures/lights_wiring.jpg)

Lights enclosure with breadboards wired up:

![lights_box](pictures/lights_box.jpg)

Qi wireless charger attached to battery pack:

![battery](pictures/battery.jpg)

Fully assembled:

![assembled](pictures/assembled.jpg)

Currently working on slimming down the rear light enclosure using a more rugged case, also working on a new attachment mechanism.
