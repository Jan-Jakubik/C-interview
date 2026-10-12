# Soft Skills and Culture Fit: Interview Guide

Questions and role-plays for assessing proactive developers with a growth
mindset: people who work actively to understand the problem and push back on
unreasonable requirements.

## Interview questions (behavioural, ~5–7 min each)

Ask for one concrete, recent example and keep asking what the candidate did
themselves. If they drift into "I would…", bring them back to "Tell me about a
time…". Hypothetical answers tell you much less.

### 1. Understanding the real problem

"Tell me about a task where the problem turned out to be different from what
was first described. How did you find out, and what did you do?"

- **Probe:** When did you notice? Who did you talk to? What would have happened
  if you'd built what was first asked for?
- **Strong:** asks "why" early, talks to users or stakeholders, restates the
  problem, checks assumptions before building.
- **Warning:** found out late, blames the spec, "I built what the ticket said."

### 2. Pushing back

"Describe a time you disagreed with a requirement, estimate or technical
decision from a manager, senior colleague or customer. What did you do, and how
did it end?"

- **Probe:** What evidence did you bring? What did you offer instead? What
  happened when you didn't get your way? Have you ever pushed back and turned
  out to be wrong?
- **Strong:** argues with facts and trade-offs, offers alternatives, stays
  respectful, commits once a decision is made, and escalates on purpose when it
  really matters (e.g. security).
- **Warning:** has never disagreed with anything, or "they were wrong and I was
  right", or quietly did it their own way.

### 3. Proactivity

"Tell me about something you improved that nobody asked you to, in the code, a
process or the team."

- **Probe:** How did you decide it was worth the time compared with planned
  work? Who did you tell, and when? How did you know it helped?
- **Strong:** spotted a recurring pain, estimated its size, got buy-in,
  finished it, measured the result.
- **Warning:** no example at all, or a big change nobody was told about ("I
  rewrote the module over the weekend").

### 4. Growth mindset: mistakes and feedback

"What's the most useful critical feedback you've received, or a mistake you
made, in the last couple of years? What did you change afterwards?"

- **Probe:** How did it feel to hear it? What do you do differently today? Did
  you share what you learned?
- **Strong:** specific, owns it without beating themselves up, names a concrete
  change in how they work that has lasted.
- **Warning:** a strength in disguise ("I care too much"), blames others,
  nothing changed.

### 5. Team and culture

"Think of the best and the worst team you've worked in. What made the
difference, and what did you personally contribute to each?"

- **Probe:** What would you do in your first month to improve a team like the
  bad one? What kind of manager brings out your best work?
- **Strong:** talks about trust, candour and shared ownership, sees their own
  part in both teams, and their "best team" sounds like how your team really
  works.
- **Warning:** everything bad was other people's fault, or their ideal clashes
  with your reality (e.g. they want fully specified tickets and your work is
  full of ambiguity).

## Role-plays (~10–15 min each)

**For every role-play:** one panelist plays the role and the other takes notes.
Stay in role, answer only what the candidate asks, and don't hint at the "right"
answer.

### A. The vague request (problem understanding)

- **Intro (read to the candidate):** "You're a developer on our team. I'll play
  the product owner bringing you a new request. Treat it as a real meeting; you
  can ask me anything."
- **Panel's job:** give the request, then answer questions without
  volunteering the hidden facts. The note-taker records how many questions come
  before the first solution and which hidden facts the candidate uncovers. Stop
  after about 10 minutes or once they propose a plan.
- **Opening line:** "Customers say the report export is too slow. Make it
  faster by next sprint."
- **Hidden facts:** it's one key customer, exporting 500k rows a month, and it
  takes 4 minutes. What they actually want is the file in their inbox on Monday
  morning.
- **Look for:** questions before solutions, a summary of their understanding,
  and the smallest fix that meets the real need.
- **Warning:** jumps to a technical solution within the first minute.

### B. Updates by Friday (pushing back under pressure)

- **Intro (read to the candidate):** "You're a firmware developer. I'm your
  manager and I've just come from a meeting with sales. I need an answer from
  you today."
- **Panel's job:** play a friendly but pushy manager. Share the hidden facts
  only when asked. Use the pressure lines one at a time, each after the
  candidate has answered the previous one. The note-taker records whether they
  asked about risks before committing, what options they offered, and whether
  they spotted the flaw in "send a fix".
- **Opening line:** "Sales promised the customer remote firmware updates for
  their 5,000 installed sensors by Friday. It's Tuesday. Can you commit?"
- **Hidden facts:** a failed update or a power cut in the middle bricks the
  device, and each bricked device needs a technician visit.
- **Pressure:**
  1. "The CEO already said yes."
  2. "Skip the safety checks."
  3. "If it breaks, we'll just send a fix over the air."
- **Look for:** separates a Friday demo from a real rollout, offers options,
  holds firm on safety, and sees that a bricked device can't receive a fix.
- **Warning:** promises the whole fleet by Friday, or says no without
  alternatives.

### C. "The compiler is broken" (disagreeing with a senior, C/C++)

- **Intro (read to the candidate):** "You're a firmware developer. I'm the
  senior lead on the project, and we ship on Thursday. I've already decided how
  to fix a problem and I'm telling you what to do."
- **Panel's job:** play a confident senior who is sure it's a compiler bug. You
  don't need deep C knowledge, because the key fact is in the background below.
  If the candidate names the real cause, answer: "Prove it, we have no time."
  The note-taker records how respectfully they disagree and what they propose.
- **Opening line:** "Since we switched on compiler optimisation, the firmware
  hangs. Switch it off and we ship."
- **Background:** the cause is almost always a bug in our own code that
  optimisation exposes. Switching optimisation off hides the bug; it doesn't
  fix it.
- **Pressure:** "I've written C for 20 years."
- **Look for:** respectfully questions the claim, explains that hiding a bug
  isn't fixing it, and asks for a short time box to find the real cause.
- **Warning:** just switches it off, or talks down to the senior.

### D. The device that reboots every night (learning and being challenged)

- **Intro (read to the candidate):** "You're a developer on our team. I'm from
  customer support and I need help with a problem in the field. Think out loud,
  and I'll answer what I can."
- **Panel's job:** describe the problem and answer questions using the hidden
  facts. Use the challenge once the candidate says "disk full". If they're
  stuck for more than a couple of minutes, hint: "What happens at 2:00?" The
  note-taker records how they deal with not knowing something and how they
  react to the challenge.
- **Opening line:** "Devices reboot every night at 2:00. The log shows a
  cleanup job starting, then 'disk full' errors, then a watchdog reset."
- **Hidden facts:** the cleanup job fills the disk for a few seconds. The app
  keeps retrying its write and freezes, so the watchdog restarts the device.
- **Challenge:** "Can't be. After the reboot there's 30% free."
- **Look for:** connects the reboot to the 2:00 job, says what they don't know
  and how they'd check it, explains the challenge instead of dropping the idea,
  and sees both problems: the disk fills up, and the app freezes instead of
  handling the error.
- **Warning:** guesses without using the log, gives up at the first challenge,
  or stops at "delete old logs".

## Scoring

Score each skill from 1 to 4:

- **1:** no evidence, or a concern
- **2:** some evidence, inconsistent
- **3:** solid and consistent
- **4:** strong enough to coach others

| Skill                                     | Questions | Role-plays |
| ----------------------------------------- | --------- | ---------- |
| Problem understanding                     | 1         | A, D       |
| Pushing back on unreasonable requirements | 2         | B, C       |
| Proactivity                               | 3         | A, B       |
| Growth mindset                            | 4         | D          |
| Culture fit / collaboration               | 5         | B, C       |

## Tips for the panel

- Score separately before you discuss.
- Before the interviews, write down the specific values you mean by "culture
  fit" (e.g. ownership, candour, learning). Otherwise it slides into "people
  like us."
- Use the same scenarios with every candidate so the scores are comparable.
