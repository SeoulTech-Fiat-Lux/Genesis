---
name: "\U0001F52C Architecture Decision (ADR)"
about: A record for significant design of project and technical decision
title: "[ADR] "
labels: 'research / ADR, status: discussion'
assignees: ''

---

<!--- 
❗️이슈 작성 전 확인했나요?
- Reviewers?
- Assignee?
- Labels?

❗️ 레이블(Labels)을 다는 규칙은 아래와 같습니다.
1. :hammer_and_wrench: 작업 유형(Type) - 문제점의 성격 정의
- type: bug: 예기치 않은 오류, 크래시, 메모리 누수 해결
- type: feature: 새로운 기능이나 로직 추가 (예: AABB 알고리즘 추가)
- type: refactor: 기능 변화 없이 내부 코드 구조 개선
- type: chore: CMake 빌드 설정, 라이브러리 추가, 단순 파일 이동 등
- type: docs: README, 주석, 기술 문서 등의 문서화 작업

2. :bricks: 도메인(Domain) - 작업 구역 표기
- domain: core: 메인 게임 루프, 메모리 풀, 리소스 매니저 관련
- domain: physics: 강체(Rigid body), 충돌(Collision), 유체(SPH) 연산 관련
- domain: graphics: OpenGL, 렌더링, GLSL 셰이더, 메타볼 관련

3. :microscope: 연구 및 성능(Research & Performance) - 연구 과정 기록
- research / ADR: 아키텍처 설계 고민, 수학 수식 토론, 논문 적용 관련 이슈
- optimization: 프레임 드랍(FPS) 개선, 알고리즘 시간 복잡도 개선, 메모리 최적화

4. :speech_balloon: 상태(Status) - 팀원 간 소통
- status: discussion: 코딩하기 전에 설계 방식에 대해 합의가 필요한 경우
- status: help: 내 능력 밖이거나, 혼자 해결하기 어려워 팀원의 도움이 시급한 경우
-->

## :memo: 고민 배경 (Context & Problem)
- 개발 중 부딪히거나, 적용을 고려하고자 하는 논문, 참고자료 등을 

## :balance_scale: 고려 중인 대안들 (Options Considered)
1. **Option A:** (예: 충돌 처리 알고리즘 관련 논문)
2. **Option B:** (예: 게임 엔진 개발 관련 유튜브 자료)

<!-- 
이하는 이슈 종료(개발 건 PR, 토론 완료 등) 시 제(임요한)가 정리하여 마지막 댓글로 달 예정입니다.

### 🇬🇧 TL;DR for English Readers

**:mag: Issue Summary:**
(버그나 기술 적용 관련 논의를 1~2줄로 요약)

**:hammer_and_wrench: Resolution / Decision:**
(최종 합의된 해결책을 영어로 명시)

**:memo: Note:**
(이 선택이 엔진의 아키텍처나 성능에 미치는 영향)
 -->
