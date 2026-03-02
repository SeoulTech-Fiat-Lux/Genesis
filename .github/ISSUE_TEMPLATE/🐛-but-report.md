---
name: "\U0001F41B But Report"
about: A report for detecting and fixing problems
title: "[BUG]"
labels: 'type: bug'
assignees: ''

---

<!--- 
❗️이슈 작성 전 확인했나요?
- Reviewers?
- Assignee?
- Labels?

❗️ 레이블(Labels)을 다는 규칙은 아래와 같습니다.
1. 🛠️ 작업 유형(Type) - 문제점의 성격 정의
- type: bug: 예기치 않은 오류, 크래시, 메모리 누수 해결
- type: feature: 새로운 기능이나 로직 추가 (예: AABB 알고리즘 추가)
- type: refactor: 기능 변화 없이 내부 코드 구조 개선
- type: chore: CMake 빌드 설정, 라이브러리 추가, 단순 파일 이동 등
- type: docs: README, 주석, 기술 문서 등의 문서화 작업

2. 🧱 도메인(Domain) - 작업 구역 표기
- domain: core: 메인 게임 루프, 메모리 풀, 리소스 매니저 관련
- domain: physics: 강체(Rigid body), 충돌(Collision), 유체(SPH) 연산 관련
- domain: graphics: OpenGL, 렌더링, GLSL 셰이더, 메타볼 관련

3. 🔬 연구 및 성능(Research & Performance) - 연구 과정 기록
- research / ADR: 아키텍처 설계 고민, 수학 수식 토론, 논문 적용 관련 이슈
- optimization: 프레임 드랍(FPS) 개선, 알고리즘 시간 복잡도 개선, 메모리 최적화

4. 💬 상태(Status) - 팀원 간 소통
- status: discussion: 코딩하기 전에 설계 방식에 대해 합의가 필요한 경우
- status: help: 내 능력 밖이거나, 혼자 해결하기 어려워 팀원의 도움이 시급한 경우
-->

## :mag: 현상 설명 (Description)
- **현상 요약:** (예: 메타볼 렌더링 시 프레임이 10 이하로 떨어짐)
- **발생 경위:** (예: 유체 입자를 1000개 이상 생성하고 화면을 축소할 때)
- **기대/실제 결과:** (원래는 60FPS 방어가 되어야 하나, 현재 멈춤 현상 발생)

## :dart: 수정 전략(Solution Strategy)
- [ ] To-do list

## :computer: 환경 정보 (Environment)
- **OS:** Windows 11 / Linux (Ubuntu 22.04)
- **Compiler:** MSVC / GCC / Clang
- **Graphics:** OpenGL Version

<!-- 
이하는 이슈 종료(개발 건 PR, 토론 완료 등) 시 제(임요한)가 정리하여 마지막 댓글로 달 예정입니다.

### 🇬🇧 TL;DR for English Readers

**🔍 Issue Summary:**
(버그나 기술 적용 관련 논의를 1~2줄로 요약)

**🛠️ Resolution / Decision:**
(최종 합의된 해결책을 영어로 명시)

**📝 Note:**
(이 선택이 엔진의 아키텍처나 성능에 미치는 영향)
 -->
