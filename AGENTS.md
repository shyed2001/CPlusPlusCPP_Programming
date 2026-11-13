# Agents

<!-- BEGIN SHYED AI TOOLING POLICY -->

## Shyed AI Tooling Policy

Local repo instructions first, then the canonical index, then tool defaults. Respect lockfiles: `pnpm` only in
pnpm repos, `npm` in `package-lock.json` repos. Ask before global installs, MCP/hook changes, destructive actions
or broad rewrites. Full text in its one home (block SHYED AI TOOLING POLICY):
`F:\GitHubDesktop\GitHubCloneFiles\AI_Tools_Plan_Master_Index_Lib\027_UNIVERSAL_AGENT_CORE.md`

<!-- Pointer since 2026-10-05 (R-82 no-loss dedup): the full text that stood here is in that file, and in git history. -->

<!-- END SHYED AI TOOLING POLICY -->

<!-- BEGIN SHYED PERSISTENT AI REMINDER -->

## Persistent AI Reminder

Do not make Shyed repeat stable setup/context instructions. Before asking setup/context questions or
recreating previous work, read the full reminder (read order, default behavior) in its one home:
`F:\GitHubDesktop\GitHubCloneFiles\Obsidian_Vault\8 AI_Prompt_Engineering\docs\persistent-ai-reminder.md`

<!-- Pointer since 2026-10-05 (R-82 no-loss dedup): the full text that stood here is in that file, and in git history. -->

<!-- END SHYED PERSISTENT AI REMINDER -->

<!-- BEGIN A53A1-SCRIPT-MAP (source: AI_Tools_Plan_Master_Index_Lib/tools/agents/a53a1_block.md) -->
**Terminal commands and helper scripts (owner A53a1, revised 2026-11-13 after the lab benchmark; FUS = Frequently Used Scripts, FUC = Frequently Used Commands):**
**default = Python** - `python` on Windows, `python3` on Linux/VPS (`py -3.x` only to pick a version); plain interpreter, no `uv` needed.
`uv run` only inside uv-managed Python projects or for PyPI deps (`uv run --script`, PEP 723); never pip into system Python.
Another tool only where measured faster: search `rg` · HTTP `curl -sS` (`curl.exe` on Windows) · text filter/edit on Linux
`perl -ne` / `-pe` / `-i.bak -pe` (not on Windows: 10-30x slower there). Shell glue: `bash` on Linux, `pwsh 7` on Windows
(Windows objects/admin), `cmd` only for a one-line HMI wrapper or launcher. Lua/LuaJIT only for embedding (Redis `EVAL`, plugins, FFI).
Harness file tools (Read/Edit/Grep) before shell. Name the tool and the reason only when it is not the default.
**Production MVPs: Go, cgo, C/C++, Rust** (software code is not scripting). Evidence: `AI_Tools_Plan_Master_Index_Lib\reports\LAB_TOOL_BENCH_ALL_20261113.md`.
Rule: `F:\GitHubDesktop\GitHubCloneFiles\AI_Tools_Plan_Master_Index_Lib\007_AI_DOCS_POLICY.md` SHELL-TOOL-CHOICE-045.
<!-- END A53A1-SCRIPT-MAP -->
