CONFIG := display7b-test.yaml

.PHONY: run clean logs compile

run:
	esphome run $(CONFIG)

clean:
	esphome clean $(CONFIG)

logs:
	esphome logs $(CONFIG)

compile:
	esphome compile $(CONFIG)
