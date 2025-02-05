# Sparta_6

## 필수 과제 (기본 요구 사항) 🐣

### **필수 과제 1번 - 서로 다른 Actor 클래스 2개 이상 구현**

- 각각 **StaticMeshComponent**를 가지며, 맵에 배치 가능한 형태여야 합니다.
- 두 클래스는 서로 **다른 동작 로직**을 수행해야 합니다.

### **필수 과제 2번 - Tick 함수 기반 동적 Transform 변경**

- **회전 기능**
    - `Tick(float DeltaTime)`에서 `AddActorLocalRotation()`(또는 유사 함수)을 사용해 **매 프레임 회전** 처리합니다.
- **이동 기능**
    - `Tick(float DeltaTime)`에서 위치를 변경해 **왕복 이동** (또는 원하는 이동)을 구현합니다.
    - `MoveSpeed`, `MaxRange`, `StartLocation` 등을 고려해 일정 범위를 벗어나면 이동 방향을 반전시키는 등의 자유로운 로직을 구성해봅니다.
- **프레임 독립성**
    - 이동/회전 시 반드시 `DeltaTime`을 활용하여, 하드웨어 성능에 따라 움직임이 달라지지 않도록 해야 합니다.
