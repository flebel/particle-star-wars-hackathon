============================
Particle Notification Button
============================

This project uses a Particle Internet Button to create an Internet-connected notification device.

Notifications can be triggered through a HTTP request to Particle's API, enabling any IoT device to trigger a notification.

Motivation
==========

I needed to get notified of events through visual and audible feedbacks, regardless of which monitor, computer, or headphone was currently in use in my office.

The Particle Internet Button was chosen for its ease of use and pre-wired 11 LEDs, buzzer and buttons.

Getting started
===============

* Step 1: Flash the content of `photon.ino` to your Particle Photon device.
* Step 2: Make a HTTP request to Particle's API: `curl https://api.particle.io/v1/devices/DEVICE_ID/notify -d access_token=ACCESS_TOKEN` to trigger a visual and audible notification.

If you will be triggering notifications from multiple devices, you might want to consider using the Embassy_ project as a proxy to the Particle API, to help you secure your access token and avoid duplicating it across your fleet of IoT devices. Embassy_ was developed in conjunction with this project.

Alternative use
===============

I find the Particle Internet Button extremely useful with LittleSleeper_, to monitor noise level around a baby crib. Using littlesleeper_notifier.py_, the Particle Internet Button displays the noise intensity as a progressive LED circle.

.. _Embassy: https://github.com/flebel/embassy
.. _LittleSleeper: https://github.com/NeilYager/LittleSleeper
.. _littlesleeper_notifier.py: https://github.com/flebel/iot-projects/blob/master/littlesleeper/littlesleeper_notifier.py

