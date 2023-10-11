# 42-push_swap

In this project, we will be creating a program that sorts in ascending order numbers into `stack a`.

## About

- There are only 2 stacks, `stack a` and `stack b`.
- All numbers will begin in `stack a` and must end in `stack a`.
- Using specific intructions, the program will display the smallest list of instructions possible to sort `stack a`.
- These are the available insturctions:

| Instructions |                         Description                         |
| :----------: | :---------------------------------------------------------: |
|     `sa`     |        swap the first 2 elements at top of `stack a`        |
|     `sb`     |        swap the first 2 elements at top of `stack b`        |
|     `ss`     |               `sa` and `sb` at the same time                |
|     `pa`     | push the first element of `stack b` to the top of `stack a` |
|     `pb`     | push the first element of `stack a` to the top of `stack b` |
|     `ra`     |         shift up all the elements in `stack a` by 1         |
|     `rb`     |         shift up all the elements in `stack b` by 1         |
|     `rr`     |               `ra` and `rb` at the same time                |
|    `rra`     |        shift down all the elements in `stack a` by 1        |
|    `rrb`     |        shift down all the elements in `stack b` by 1        |
|    `rrr`     |              `rra` and `rrb` at the same time               |

### Scoring of the project

| Score | list of 100 numbers | list of 500 numbers |
| :---: | :-----------------: | :-----------------: |
|   5   |    less than 700    |   less than 5500    |
|   4   |    less than 900    |   less than 7000    |
|   3   |   less than 1100    |   less than 8500    |
|   2   |   less than 1300    |   less than 10000   |
|   1   |   less than 1500    |   less than 11500   |

## Installation & Usage

### Requirements

- GNU make (v3.81)
- GCC (v4.2.1)

### Building the program

1. Download/Clone this repository

```bash
git clone https://github.com/joekeroo/42-push_swap.git push_swap
```

2. `cd` into the root directory

```bash
cd push_swap
```

3. run `make`

```bash
make
```

### Compilation

- `make` - compiles the program into `push_swap`
- `make clean` - removes the obj folder
- `make fclean` - clean and removes `push_swap`
- `make re` - fclean and recompiles

### Run the program

Example of how to run the program

```bash
bash$ ./push_swap 5 2 1 4 3
pb
pb
sa
ra
ra
pa
rra
pa
ra
```

## My push_swap performance

| Score |                                                                                                                                                                                                                                                                                                                              list of 100 numbers                                                                                                                                                                                                                                                                                                                              |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       list of 500 numbers                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       |
| :---: | :---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------: | :-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------: |
|   5   | [`594 steps`](https://codepen.io/ahkoh/full/bGWxmVz?LQVgTCAECcYByRHKwCM0DMk0DZrYHYMdswcVp1ScAWSDDA0iSVDO4OABhJvOxAYu2VKkhgw+YERQEawzlwRy60Llk5wwkODSl5twDGsh4SlSDSGQCqEqHDY4qFLQQZJ2HAWGDs0Gih2JiMwJm8oOGMdH3oAmC46Hyk1EnYxYDJDaAJ7GjDTLgzobkJUbQIwYTsFAij6PTKEIzyQSK4mMjpvVh4nO3oGGBoxHHgvVxAMmmcRdkI-aSL6XWxo1FLgCJt1ahI4fmARwjAMsGJTeL0QmjrSEBICaHwcLil8wxA+7hJyBSGcNEjFQCCAOPUJOI2hIYRA4eBoRJoeAIG0UfD4WjkTCUdikWjUeicRj0YiyQSibCqdSabS6TTRHYmc90JQpmhbNApqyppzKM8pgL0DgcHZRSzgJLpKgpXZbCLxdBRdICLZJTK1Tz0NyXEzvMKmXy2lrNDy0RtnGg4M5rVNnFzzTasXbbeztc6PY6LdbkFNnRtjZLrTKZcHVahw6qo1GIzLJdGEwnROrbQHA1Kg5boxaQ-qVaJnOauRs5e7WUqRegNdn8+H+VNKyKk7Zw07Pe2Ox2Sx6y-7E-2B4PB0A) |                        [`4250 steps`](https://codepen.io/ahkoh/full/bGWxmVz?LQVgbAHABA7ATARisOMAMURwCzO2gTigIVwlzAJkzDCghGjgGZd8MDDlnnoIEMwMNjjII6KHAgYpzPHDrBs2JEITRgCGNUYhYqTALzjio8jrS5Q6qDzK1uaagVbIwLTCKi05ml8gVfAhBcRjYrZgU3EGpQbFjyPhgNOCoofDoVQRDcQS1BCFFmNCREDWwQIhRU7grbRmQEYuRODUhREmgSOTAmsVJkZKJsCCI4D2BgxQJpWBJuGCsapUL0lUk4PWxONx4xHeBtPXFqHGgBVREiMF5vbW8GxUQiTiRijSaqzsx74GZwFrMKqsDAQSgBBCqdyqGAgDA8DC0Ij8ag8RRgijCYhONaxHhEHh6Q6zJRgIlaRTMCTAMFVFSxcZMSG7bIIa6wwYGfh6ZItBw0yqNBCiAVIKhPEByBgyIpRQ7NJQgIlAolYDTkHowJCJKCQoKC-6iKR0Zg2IEihDubGibDgygisAScAi5gOZJEmB7WFEzhEcCCeKxdTQESqMHeGw0xbECgwOiICKIQa8tm4OBcGD+SaQQF0SGCTOKZTpVVsJ5azBoOguURx0SVKqbOhHIW+JUaAgeEB9UYem54U2DKliVx-In2sT4NxY1h6SqqV3eUdA1GRbg4dIOhhucOkXCkEWZ4j9lgvHOHGJrOkKwqKRhVbv7GEEYGzEJ4ho0tdSagjSTk8Y3HiWBH07a8eRfQZoHgE0gWQSUiE9WBeW2UpiyEGZ6EXIQuBwxFBEdXwtTkAY2SINlDFVLg4QdNAgmgwDeGRPIECo5Vw0OZkVkUdwbViTs6HIDBtFKK1QBxIQIGg0YsNwXhfDZIlxjoPQSGbbAeiVPA0EEVxaGbe4m0kEp0l5JQpDceBvBMSg9EgOys02ScYRFW1+PmJVVBwJBYWoSAxWZDStgolAwGyftBxyayRRiWt+I3DClkFAgwt1altkRYU8ABUAkJXbSgwBOEA0lSzPEGdZDg04hmncIkIDgoRUuCcdB0mCylCPC9kPjBL1BFQpVGFZwnNNKwqB6D4uzSKgGQGbMqmlMQzM7ZwsoIarGGoBg-MdIcKDkCpoCwKoJGCeC0jZUFLF1fg7jcc6UHIAddSxeURRYPJXHIDpsOEDsKMqHkuO2KxpHIm7JjM7YjVY6I9C0PsF0FGlUtCj7i16NM0A0dAXRM+IkBUH1H0OW7DsjRgCPBGZDtHQoMBGNgTD+SQ4yXKF4zuzgPVKmlFvQxZ63TYgj0iBSTP4DQqV8XsWkwjDf0g20Yr6C87N6QYQk5PMsviGQdLSomNvoCytAZOF6A5ThMic1oxDstBjm2TkfIBaR6z2EI2wVnAeIu+rbWW7hSc4WJtAUqchCDipyUXOFDqdgJqvM2A1dSOQqSNDlKGEu70B8w2yS+G6RmEy3ND2VBtHgGu6-ruvq9Qava5blvtHbhuG+bjvG9brue9rruh-7mv287pve6n8eR6nuf54X-vB77sfu6H5fl-rzve8n1fh7btfh6Pifp-3gf14vlfD73nfb8X0fz8Hp-V+38+H9nj-T5v6+H+3yeD-fjPLewCgGf0fmA3+s9N5vxflA4BV8f6tyVOMTYyClToNQVgVBmxsHjGQXgzBGC8HoLQfgtBBCSEYKwSgkhOCiGUNIYwihVCqF0NYWQrAnDMGEJodw8hDD+FsOoTwoh3DCGcNERIlhpC6EEJ4bglh4jpFkOIfw6hMiGHYKYRIpRjCpGiOYcwgRsiBFcIUcQrRKDVFyJwSInR+CtFYIcUYwRNiRG4IobY+RTirHqPsbQ1RlCaFcL8eQ3RVivEBK8W4kJtjhFsPEREpxtC1HxIiekjJmSsnZJybkvJ+SClZMhL0LU3ZNAIE0FLbs-BKmeQYHUip6gmk1JpObS0tARIpTZIpSEbTejAFaZxTQ-S2S9DGVqfStAyK9BfGpLULV0HtLIt2EgIl+COi1CJAZXdgwtIGdsnZ3TWJlKkubCZZESD7IORU05IkNmQk8i+M5FzFLVPqYsqSZSLmzJfDMl8DDdlSXedUspBytRAs+Z5ARpyYUQoEcGFZHzjl1JOfwBZnl9lSyBaCs54K9n7MBRUq5uzAUrPRWS2ZHyoWmJubs6pRK1lYshWSxZ8L1AYqJdMv5PzAXYpReykFRLtlCrBfXZ5tLRVisOHXUZ7StnDNpfU3F8ypkiraaxY5NypbtI6fMlqpKAX-I+RCmpMr9lipNUyy1iyaQQuVXq8lpiWWUMtC8513z0XIpxQwXlQK6WgtNVqK5OyrkDPWZMiN8qhnmobjqiN8b9JHyTUmuNCa00lJlcEC5kzXk6pVVMxNIkxW6rNWGk1vqXV2tDUGq5WKMUEsqQKhl4KmnD1GfpVN3SOkVImXczZ8qa7tqHRswdkInmIshGimZ3YC3Ip6SWyEg7zkEraSQS5WoNVZvrQMhFILuwkK9YshNLzKX7upY8n5UzPKFruZM2NobiV2tjYGuVryj05uBYs2ZGrLUiofbe5NuKHndJnUGvVsrvkHtmR2ktDqO0PulZm6D6aO2npdTewDPSQOQlafco1rqR1Bo9bmnlKUZl-Lqdqn1SrIU9plYWkVfqMNCv7WOmdY6pn-J6WRqZiGi1rKWT8n5F7KO0fecs75vRxPCYvam3jO7fljO7Qmh1imJOWpo06oley-VOvfUOh9v7rVaqtacz1PK60NOjVGntFaaWOvPY0-DQry3UarXxuNpaPMKuGZG5NbbpV0ebRu5D8mY19vo2F7TKIRIss84xrQjTw0UYvb8w9byTVafhX4G1VTlmUfPZ5fzxWStttg4O7tZKYNKcHQh0NiW-B-N3aCttYrv2SqPouujt602lb6-1gbEy71SsC9Z6Zf7g2DaG-5zzUadlipDbWuVYGtn9sHWUzZRz4NlphX+v1cK-0VZzUJxTJTlsTeuSxnrA7LSbaW0unDdqNM+taV5jz4a5s1sbXi1l9mTt6YB4DyDbS+UnPyw04FArjVZa0w5qDX6z0HsB8jlHqO0fo4x5joAA)                         |
|   5   |    [`616 steps`](https://codepen.io/ahkoh/full/bGWxmVz?EwRgbABAtAHAnAdgnAzMCAWFSZjpmEaDJbJKYBAVmhBUmxqjBRmlUjFAhQycRTIM+cJxg0UqZMEFQQMAAzQwCoigVKoCRDwXlg4iFWBMwMNutkYQEjA20RQV7iAU0YwJSs5VIUKri0TIqQCBrQVCDkCCBENhgQihEm0Ahg7hhK9DQyxHq0wAlQ6kxUcPj+CAlUrNC8-BjoWr7sCkUIYYnomU1U+ZKQwhBhagq98nWZ7GB+CLXAFXBl0KBFdrIoaEKhhTxgRSBTsEPMY8Qdw+rKw1OEa1tybcQBEbyOYERLg7HJbHJr8CMlAQlFBHQ6YLB4JBMKhENhMIRcPh8MhiLRyLhULR0OBKOBBNR0JRCNJwHJFMpVOpNNpdKpsTgICZNnkohAUC0sXAHMIMRmzKZkSWVEi5nEgvKkRmMo5nI63JlMxi5XKojAMU58vBcsFHyWbM55jZ4lF8lFZqNxu1xNiYsNcn5yuZZotdqiHsFwpskUZHw+WhiHMlbtdFrFkVgPrdnPkppdZvFScjsEIVrTxo1CsDTp9sWVmpiaezsazhbZ5VlBvDEdr4YT9fjNZrXubbfr3PbXe7PZrQA)     |         [`4405 steps`](https://codepen.io/ahkoh/full/bGWxmVz?LQNg7ATABMkIwxAFhFAzGgrDAnADgAYoI09iJthMRo4QE81pSwpMko841i8yRwUJHGjA0BVMEaikODvkl8eEHAmBIwRUHA6wwu7kTAYYkIkjw4YTIxJhJ2UcFqRpdmHJQiv0mNTkEQPFYxYRhg7BwTEBxaAg40OURjcKQtGmIdXETsyU9KMEVVJzgrUHj0XRVRNDAyzx5gblYIFWyyMQhUTDrw7ms-UxwtTEJ7EEp8EImiRhC4LJACSiQ0qBx9TjgQ8WgNtQ1RPhhMCDI8TEbIK3ZUClFSygvoVxW8VDwumDgCMh+rLr+ETEEIOSTCKyrNSXSRBBAaMqJaCEVjUBAYLSlWiUGjYM4hM5qSyiQZ1LQYURBDpwMagQR+DgkRqrK5cdZgFqOEAmdQCYjITi-GAQZa4M6caipXRpNTcoSnYgOTJWcAdChQMCfYi1daxdCIbBcB4xUzYBbQblWRKoVRaYyGvk0soQGlONDQsJNS7s8LeXxaRhEGkFQJLE4c6zAqgkE6KTWZDqjAEx0BKqQEAOlDUuxDA7zQNqjHiDETYd2sDBWgg8WKoIJ5LJ1eopJrFYCtDru8Ki9tfMQ-IQZdsoE6jVJ43o0sjsBCYCpiNB5OygLDd+QEEJ4aWNOhqLqSFLsMoOHilcELRBW4oBYV+9tlOA9b4EBA4DbrbbCiMWRpsrioMAPHWLd+S2eEJmIAgykgSgflYHxSj+AgLVXWIcSzKQchFKAsSEC4cL3RhEBAgQODAV0FmLOgnDWKRDwA4I2BNKQLzEYZ1jaDZ+AzSoyyYNgFVgLC1gcEJqEkHUml6VRkz+MSXg0exxT4eYviwFUChTCByM4NozkacRoKCThxG+BCc0KMhYjUQoEE1GtAOFfANUbfCKGZehY2nRTFwfIiOQQbYOA0WYeNAcV1DvOcQn0O1CmFOV1C1KhNHQRcDQecVaj2EdW3OMJNXJRxQG9PwHgjYwykwLlLHsTY5AQVpdA5cxkMQVo0t0LBsBmOqevi-AAwjWAfFqZkSzbLpkSgk4KlkM0dUKGQlVUC0EDuCDnKwURyPWnwPF0ARi0cx8rPsMcUsC3opDHZB5jZJZWCiL8OAuac9RYrR8A6VwSWc2I7Ta0ZZSfJpqw1Cx0EEbTYLDISAy0F0iDcZkb3vHr+M0K4BzoACX0vTE5yUqjizaYIeCVSwyCYQ6dKoVcmjcTgb3eKxhh4NlOlMDr2w3cJGPUdj2wg4wRiJppauAfB-B895cE2WBvToDmcnAQLwZFVh6EaLoOj1HRRE8DoOWm4hnpFSQSAtJIlisQpETTHgYLYRabX6MQSMgIQey4KpoTRmhUAWIgKENUgcK9hZ+GcsR42F0whSiMWYrCJhAvS3s2aFKW2w2EOB15L6maSjhTiexwok7MNIBkAUpA6rg8VaU5qu0jkTfbzvtLbyBe67vue87ju28Hoex+H8f2+7ie+97kfx+nyee8Hlex-ngfZ6H9ep53yeO632fV83zfR93xfp+3g+F7Xq+9-34-d-vx+d9Ph+7-fl+H8X5-L+vueN4Aevbeo9X4fwATfM+-cn79xAVfI+oDP7-0Pj-feF9EGP2Xn-JBG9u6t1DvcU4+DqqtxboQghzcCEt2biQ0hhCaF0IoUQmh9xQ70MYcQ4hlC8EcJ4Tw1o-DaFUP4eQ-BAiqG8MEaQ6hvDWF8NEeIqRkjWFMO4UwyhsiNGCJURw6hai2EUJ0bI+hZDJHcM4ZwzRpjpEqJEew8hii8EsIkQw4Rqj7EmMUUQgRdjXGOKkbo8xwj5EMLkS4kJRjxHsP0copxZCYnGI8U4rhsTGHSLoSY3RLCgnZJybkvJ+SCmFKKcUkphSFiqG2Nscifgmj0GqXACWNIpyPmqsGKcNTgCdN3KoLgsAqnkQqRUi4pQ3xvlxgICZAz8i4zPAIWZczwABQmWrUZ4y5mjNGX4PgfAGnbL2Q0zpH8DkBQabskZYyAjrIae3XZXAh5Rw6btf83S3x+FeW8mS7yDlSB2dsnhjxiHnM8I8GZqgOHjJGa0vZgK9nDOhS03htzgzgvyK0zZrSBD1OWTcjZiLYX4uGe85xaLAUsX+TCtFqK-BzL+f84ZgKNlTj4FC5l4LhldL+dcgKsLWk-PxQcnZY9HxrOWdim5hz+k3N+cy75XTJniqaLU6p4L5Xj2+TsliwyFULD6SxMl4L-mdIlnii4pLTldKNRq8i-KJFIr5b8xFlqmlGsVSxNWnT9kuuRQyqlAKYUat1UagKlrYVMtNTU7ZQKiUjPKbi-1+KPk+o2aoTFAKo2Ar9Zmq1EL3V6AGfQPNByw20p9Sa6VjcVUIozRywl5KoVNM2aULl5EpnJrfHMhY9BKUgsWacgI1ym16F3PQTlXBw0fNeSMuZNzsXfOtf+RZra23LLoJPEVqbRVq3WcS4tLLw2QucU0lFwLgW-OReer12amjCtrVs71ArvUdItR6plEb9m+p2eikFprIUtIPVs8FPz737rze-KNKawEts7s68iLqAqjImf0nVXrYNTpjQm8Dk7GXjovbqpdqzMUBXuYu+DGzRVVq2SW4lLKJ0fp5ceqllHAOapw6OxFCHZVOsOQqveay1WgeDS6gTkGRPQdVbjciBaX3ceg0sv9Kq1V+BBTJKpTbhU3rTfQSd7rJNSd6fB45CwzzDpxXGg9u42Uloo2cp1jHKVgso1GplTmx2cvtW0wtm7COSdg1wMz6yT3tvoN53TiH+22eXVp6jnHI0gZDQS-ZorIOccLR6vzlywtBYWQqodErlOUsQyugljqhNCb44J2DHLZXOraamgd4rQsrMZc1uNE6GUBYFQSgdpWWKVaHeOg11HKMVtaUC85xbWWYemQln9yahs7qCxN+Nfh-lfLLfNjbm2NuPq27tvb+2DuvoO8dk783mm9L6e0hlO7WOAtOwinbtrIsrtWX4eDXaaO2qo36t5iKy2sto616lm78NZai6tolgPqV30M-O+jh39V3do4e2lP3ftHtaRirdaqAfbYG290ThOifE5JyJ5tkqoPE6qUAA)         |
|   5   |   [`620 steps`](https://codepen.io/ahkoh/full/bGWxmVz?LQVgDAjABMBMBsB2GsCcBmGiAs2obCkUhhBnUWhBEwwA4p47lR1pgJVUYIThsIZYInjc48TMRbpUsGKhANEqQvAh5gdBvHApZUGfiRRO8RoiHwmMZg3SH1ydLCGwIZ4PGyFgXZCMIQbDkFZFkGFVU5T3dGOmjwSzA8OjxsFSxEOQlMTzBMNmjYTEUNVE4oVNyKIopyRBKrLGSYbGsvbm8NCAhaDFaaAxEbYphRUnQzNWR2cG4ghhoWNuy+GQKK3A9EBl9EFjQhLTIJdlkxVCb3aG9CVGJ5ElgccmwD7DJiQnQwHzZ5QawIHPEHUEAuajA4HgiEuCGQ+HQsGQmEouHgmFw2EYpHY2HQoFgrFQkmksnkimUnqcHrlQScEAMxlIGlWShcTjlRkcFlWXlWTmM0xqAXAMXi4TuFkSnkQSW8uWS5HK5nU+nUQSMhQQfaUalqLiM-bCgUi66iyhi41cA0KMEmvly3XWu0qlVyrRaTXIwUQOiKsV+ugaiXst327UaoPezWc72M-2SrjlG0GnXG4SUL3BgOaRPi-1ISjO51+p2UIslqsZ3WK41s6uNpv0yty9zFpuN9Odnu9vtAA)    | [`4554 steps`](https://codepen.io/ahkoh/full/bGWxmVz?LQZgHAjABATArAFimMIoDYCcYrDHNGI3MdOXBNYTABht0zk13XR1HWgHYukuboCCFXjMIlEnSjh0LJrkQwGXdpSrYkwOL1whMmhPCgQY0YJSXBWGGFVQ50NcsFtQEmZlZwg9GCM-4uZBp2GH4FMHoedgh9WEZdLnJtSwgaTUwIaGwzEEdYYQoIIKsJcO1nYpKYBBLaTzz2OBpLDyoIWUwQJDAETRgwIKZ6ME8au26oOA7dHxZJhFRjGHpaIPRWw1g4JTGuqZogrjTYLeBj9l5uYpYuQnc3SdjoZtlB1LniF3RNZpLOOp9KBdKggabAqR4BBRWTwMxgUy6TLBejnGiyaikCijBTgrQEOSovTMbBBboYxbkcQkriWLj7RhIRFwFm4GqyNj9EJTL69aS1XGaEBmH6ogZKOA4rSFLTHNzMFTkEBfLoYyWXTCWaHOEDojAtXD0nBJDGmciRDF3dqa3BZCh3ba2uUsnCMSyICkoEhau3mWK3EkC0D+NzcqzgNl5YEwWSIVTKWSLaBhSzoYVs5psh7ADrsH6efipPXoFQKOIQfAZpRhTRYHC5pEBJZpaCDKDHKjTIIx+hRnjmqNwH7GOj0LIZGpuNNs41oNOeLCdnCmatOZCIEh82VodPUOaGdowTyRY0b6g0ETWc5IDp0ku2odsqQ8MwdqZR6j+5oxUtHnB9XZFjZAtyAQTgWEnT8mX9Lhp1IchHFrWkFBoTxNXYfAMnSW1dxLDFsCUNMb3kc4EnMIMmDsZEVjzBobQIY1-S0JYhFRfgkHAZdsI2Ek7WFaAyCQaFsjA2ZKn9Wp1ldeR8AwyCUmQfZFljXwtCMUBu1oCEmzMYZgVkO5W1cc4yAwIFqCLV8pmbJQ1AobDekuEwph2WAKQkLJXyAz9VkRHNRLCVY0FQatTNIIJBj4bQ2XyVAmXvaUHCEPxmGnUA126WzkvS+g+lRWozBWPhIXpDFODQJUlnMMIGCDLoSkQaBYmYRAgmEZhRk6DxgXM+ADIkPB8mYsx9AcPUrHNG0XGhW57RwZoxy9Wg3lg+zLFMWsK2BZz-GcHE+hKfAysfNgOsgFgTi8Mc2LtI6FBOUhUWKchYPYHx1k+TAMUgZwEFZHMQDqcIXC2vBVPwc1RJcAlzgGBRwLwOVYPNZwWUtPyj10tg2RWbYxCPW0JD0AxEVgukjFibw-PASxSH-GGvvYbB6CwVEsE8fwhnhTNsAVfY91bUscxuIQSSMJJUS+tBzIxCsxS+Rx6GmZg-vWDmDUpYD6ziGpLmQvABENJiwV7EMcyxWglHpTQUDQWI2OICsmUBzdch4SRCGVdt9cwd3rxZ8hMlS7zJTK-ICcBqh6RGB1mLQobsGMR9yIYM8hCUMFTQ2KZkSmjwSh8JQEV2UtemTaL+EtD98Ai93hREQ4XJZeAW6IFl252TvW475ue87-uO-gduh97gfB9Hifh5bvup+H0e28nxe+5HleF4HkeZ4njeh9Xrel577fB+nru597jej-Hohu678-j83i-l5X+-t-P++37XtfH9f5eH7b7-++vnfO+48z7Hx3gfEBX8IHgJ3rvG+p8EGzx2LfU+V9r572npg5uV9UFj33qA9eyCF4oKwUAmBJ8iF-zwWg+eiCZ4kPQYfX+yC34sJ-o-SB4D2FP3gdg7hRDmGXwAX-WB5DaF0I-gA6hm9u471pDwFMCj5FKPkYosISi1GqI0TwZRKjNFaMUSonR6itHGN0To5R+jNEmJMXoyxujDG2PUY4ixLiHGmI8do5x5jvG+K8eY0x1j7GGJ8aE4JrizE2Pcf49xLjvFmI8U4xJBjImpIUWgjJmSsnZJybkvJ+SCmFKKdkrI0xijPFYM1KpHgKy1M4B3XaZTIDnAgMAFprBjhtMgCgFAtTukVh6bUvupTWndJZI0vpzS2mdPOMcL6WRZnHFYCWCx-hdodHKS0jwNSUDDPbh0ZZhyVkviOccjoL5tmMGapczgNzOCnI6S+HMOZLlfWWWs8ZjyLFzIeZwNp0ynldN6d8p5qy8CDOma0rpVQ1lXOOBcrsFz6nNQabc7Z0wxlQvBVinpvT-l4pfLiiG+yiW7IGbi8ZjAGmvI8MrDF+BGnKypRMt5tz9nbIOaCk5MyAUvg2VU-5zy8BYtmeSnpm8xUQrBYM8V99rlUqZTc5qlSvkXFJUSmeWKBlv0ZZS1F9zrmVOJRi-Z2KWnGspRy4lIrYisNYRWHuEz1VyvxSiiV6LanYoVfSqFarxWtIdSS6lHLxm1NpaGrImRODXJhVUpZsR3nsuZf6kl-TrX7IqSWFFtqqirKjR0+VlzqkHLOT81pqzDkluWSc2FmqOWvNTdawVDqoUyopZq4V6rSWSq7Y2iGvqQWrKHTo3N5bvm5sHS+PN0wASEvLaMqF87oWOt2Yqu59yjlVqzd68Z+zg0mqDWG5lGbrX+oZau1tYzpiCraS2058bBVPOBdyzlWrOVgsLa87ViqZ0PPhSCkVN6pk3vxV24DQKB3jvBc0olgGNmysZZBkd1aLnhvle8i1a7f0LMnSOx9PLIUtJfGU7dM6uWjO6c6oN4z-kUdg2B69hLZV7vdTuz5lTj0sdNTewDaq12-JVfcyd1zlZ-IIyBiTgq8VAcgGxld4zV12qU5+9FDTBnhuGZc0NZLvU4oDaKjV5zB0iaU3WvVjroOydU46q5eqYXYp0xZ5ptrhn9vPS2hlt7A19MDSugZ9nW16fVXRoZamGWOstVcnNzLaX+dvfF5DfzAMQto9ivNbyjNMbA6SmzNKFXrN7ZF6zonKlJuo-53FvqsgpfA6B59UGIOLMS+845eGHMUro70jTmrFM0cfSKwFIG+XFdM1hjtUn6N2s-Wu1lpSetucw3SpNUbznlOpXSnNlSoOYra3VvFbbKODPtZVrT0xKUboLc20zByPkZrOyS-TEmS3-rFaN5bDa3tyrk0VmlMKUNLNwyOvLNK5Wbu6w0799KNXyYlQy5llbNWSpsw02HuqFPKaa4DrH2Oce47x-jgnhOifE6J5lyDAawXcuHbhidJO6f04Z4zpnOOgA) |

## Visualization

[`push_swap visualizer`] for visualizing the sorting pattern.