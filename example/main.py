import Pyro
import game


def init(window):
    window.title = "Pyro2D Example"
    window.width = 1024
    window.height = 760

    window.start(game.Game(window))
