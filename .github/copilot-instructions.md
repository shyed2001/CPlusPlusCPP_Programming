# Copilot Instructions

<!-- BEGIN SHYED AI TOOLING POLICY -->

## Shyed AI Tooling Policy

Canonical shared AI/tooling index:

`F:\GitHubDesktop\GitHubCloneFiles\Obsidian_Vault\8 AI_Prompt_Engineering\000 AI Tools Workflow Index.md`

Use local repo instructions first, then the canonical index, then tool defaults as fallback if needed.

Rules:

- Do not duplicate full global policy here; reference the canonical index.
- Respect existing lockfiles and local project conventions.
- Use `pnpm` only for pnpm-managed repos; use `npm` for `package-lock.json` repos.
- Prefer Windows-native Node 22+ for global tools on Shyed's current Windows/WSL 1 machine.
- Ask before global installs, lockfile replacement, package-manager migration, MCP changes, hook changes, destructive actions, or broad rewrites.

<!-- END SHYED AI TOOLING POLICY -->

<!-- BEGIN SHYED PERSISTENT AI REMINDER -->

## Persistent AI Reminder

Do not make Shyed repeat stable setup/context instructions.

Before asking setup/context questions or recreating previous work:

1. Read local repo instructions in this order when present: `AGENTS.md`, `CLAUDE.md`, `GEMINI.md`, `.cursorrules`, `.windsurfrules`, `.clinerules`, `.github/copilot-instructions.md`, `ANTIGRAVITY.md`.
2. Read canonical workflow index:
   `F:\GitHubDesktop\GitHubCloneFiles\Obsidian_Vault\8 AI_Prompt_Engineering\000 AI Tools Workflow Index.md`
3. Read cross-reference hub:
   `F:\GitHubDesktop\GitHubCloneFiles\Obsidian_Vault\8 AI_Prompt_Engineering\docs\ai-tooling-crossrefs.md`
4. Read Caveman/Cavemem/MemPalace hub:
   `F:\GitHubDesktop\GitHubCloneFiles\Obsidian_Vault\8 AI_Prompt_Engineering\Local_RAG_RAFT_AI_Tools\CavemanCavemen\CavemanCavemen.md`
5. Check process/install log:
   `F:\GitHubDesktop\GitHubCloneFiles\Obsidian_Vault\8 AI_Prompt_Engineering\docs\installation-process-log.md`
6. Search existing files before creating new ones.

Default behavior:

- Use compact references, not duplicated large docs.
- Link/interlink/cross-reference instead of copying full content.
- Preserve local repo defaults and existing tool behavior.
- Fall back to tool defaults if canonical/local references are missing or fail.
- Ask only before risky actions: global installs, MCP/hook changes, destructive edits, lockfile/package-manager migration, credential/account changes, broad rewrites.

<!-- END SHYED PERSISTENT AI REMINDER -->

<!-- BEGIN TIER0-TOOLS-POINTER-20260930 | 2026-09-30 | owner MCQ "Copilot instructions in 31 repos" | AI: Claude Opus 5.5 | pointer only -->
## Local Tier 0 tools — which one, when, where to read how

Before reading many files or guessing, use a local no-token tool. If you can run commands (agent mode), run it; if
not, name the exact command and ask the owner to run it and paste the output.

| Situation | Tool · command |
|---|---|
| Start of any task · which files matter | `uv run --project F:\GitHubDesktop\GitHubCloneFiles\GitAutoRepoFleet gitautofleet inspect --path . brief` · then `context --keyword X --list-only` |
| Architecture, how X relates to Y | `graphify query "<q>"` |
| Who calls this, blast radius of a change | CBM — MCP server `codebase-memory` (read-only), or `codebase-memory-mcp.cmd cli search_graph` |
| "Where is X implemented?" | Graft — `graft.cmd ask "<q>" <repo> --source` |
| Text search · Python lint | `rg -n "<pattern>"` · `ruff check <files>` |
| Before commit | `inspect --path . preflight` |

**Where to read how (before `--help`):**
`F:\GitHubDesktop\GitHubCloneFiles\AI_Tools_Plan_Master_Index_Lib\025_TIER0_MASTER_USE_MANUAL.md` section 0a (full
trigger table T-01..T-29 and recipes) · `...\AI_Tools_Plan_Master_Index_Lib\registries\fut.registry.jsonl` (one record
per tool) · `...\AI_Tools_Plan_Master_Index_Lib\027_UNIVERSAL_AGENT_CORE.md` (full policy).
<!-- END TIER0-TOOLS-POINTER-20260930 -->
