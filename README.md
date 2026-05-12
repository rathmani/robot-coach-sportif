# 🤖💪 Robot Coach Sportif Intelligent

![ROS2](https://img.shields.io/badge/ROS2-Jazzy-blue?style=for-the-badge&logo=ros)
![Python](https://img.shields.io/badge/Python-3.12-yellow?style=for-the-badge&logo=python)
![MediaPipe](https://img.shields.io/badge/MediaPipe-0.10+-green?style=for-the-badge)
![Ubuntu](https://img.shields.io/badge/Ubuntu-24.04-orange?style=for-the-badge&logo=ubuntu)

> Système robotique basé sur **ROS 2 Jazzy** pour surveiller et corriger les exercices de musculation en temps réel via une simple webcam.

## ✨ Fonctionnalités

- 🎯 Détection de pose en temps réel via MediaPipe (20 Hz)
- 💪 Analyse : stabilité coude, posture dos, amplitude ROM
- 🔢 Comptage vocal des répétitions correctes (one, two, three...)
- 🟢🔴 LED verte (succès) et LED rouge (erreur)
- 🔊 Feedback vocal instantané avec espeak-ng
- ↺ Reset automatique après 8 secondes de pause

## 🏗️ Architecture
Caméra → MediaPipe → Keypoints 3D (20Hz)
↓
[Coude] [Dos] [Amplitude]
↓
Rep Validator Node
↓
🟢 LED Verte / 🔴 LED Rouge / 🔊 Voix
| Package | Rôle |
|---------|------|
| `coach_vision` | Capture webcam + détection pose |
| `coach_analyzer` | Analyse + comptage répétitions |
| `coach_feedback` | LED terminal + synthèse vocale |
| `coach_bringup` | Launch files |

## ⚙️ Installation

```bash
git clone https://github.com/rathmani/robot-coach-sportif.git
cd robot-coach-sportif
pip install mediapipe opencv-python numpy --break-system-packages
sudo apt install espeak-ng -y
source /opt/ros/jazzy/setup.bash
colcon build --symlink-install
source install/setup.bash
```

## 🚀 Lancement

```bash
# Terminal 1 — Vision
ros2 run coach_vision pose_estimator

# Terminal 2 — Analyse
ros2 run coach_analyzer rep_validator

# Terminal 3 — Feedback LED + Voix
ros2 run coach_feedback feedback_node
```

## 🎯 Exemple de Feedback
● LED VERTE ● ✓ three! Keep going, you are doing great!
● LED ROUGE ● [COUDE] Keep your elbow fixed against your body
↺ RESET — Pause detected. Starting over. Get ready!
## 🛠️ Stack Technique

| Outil | Rôle |
|-------|------|
| ROS 2 Jazzy | Framework robotique |
| MediaPipe 0.10+ | Détection de pose 3D |
| Python 3.12 | Langage principal |
| espeak-ng | Synthèse vocale TTS |
| OpenCV | Vision par ordinateur |

## 🔮 Perspectives

- [ ] Ajouter Squat, Shoulder Press, Deadlift
- [ ] Interface graphique dashboard
- [ ] LED physique via Arduino / Raspberry Pi
- [ ] Score de forme par répétition

## 👩‍💻 Auteure

**Athmani Roumaissa** — Étudiante en Robotique & Systèmes Intelligents

---
Made with ❤️ + 💪 + 🤖
This project was co-authored and implemented by the team: Athmani Romaissa Amira Malak Daoui LAGAB MARIA
