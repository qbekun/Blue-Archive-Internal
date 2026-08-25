#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AEDF80)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCODE_OPCODEBACKTRACKS_OFFSET UNITYSDK_OFFSET(0x9AEE090)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexCode_TypeDefinitionIndex = 29224;

	class RegexCode : public Il2CppObject
	{
	public:
		::System::Int32 Onerep; // 0x0
		::System::Int32 Notonerep; // 0x0
		::System::Int32 Setrep; // 0x0
		::System::Int32 Oneloop; // 0x0
		::System::Int32 Notoneloop; // 0x0
		::System::Int32 Setloop; // 0x0
		::System::Int32 Onelazy; // 0x0
		::System::Int32 Notonelazy; // 0x0
		::System::Int32 Setlazy; // 0x0
		::System::Int32 One; // 0x0
		::System::Int32 Notone; // 0x0
		::System::Int32 Set; // 0x0
		::System::Int32 Multi; // 0x0
		::System::Int32 Ref; // 0x0
		::System::Int32 Bol; // 0x0
		::System::Int32 Eol; // 0x0
		::System::Int32 Boundary; // 0x0
		::System::Int32 Nonboundary; // 0x0
		::System::Int32 Beginning; // 0x0
		::System::Int32 Start; // 0x0
		::System::Int32 EndZ; // 0x0
		::System::Int32 End; // 0x0
		::System::Int32 Nothing; // 0x0
		::System::Int32 Lazybranch; // 0x0
		::System::Int32 Branchmark; // 0x0
		::System::Int32 Lazybranchmark; // 0x0
		::System::Int32 Nullcount; // 0x0
		::System::Int32 Setcount; // 0x0
		::System::Int32 Branchcount; // 0x0
		::System::Int32 Lazybranchcount; // 0x0
		::System::Int32 Nullmark; // 0x0
		::System::Int32 Setmark; // 0x0
		::System::Int32 Capturemark; // 0x0
		::System::Int32 Getmark; // 0x0
		::System::Int32 Setjump; // 0x0
		::System::Int32 Backjump; // 0x0
		::System::Int32 Forejump; // 0x0
		::System::Int32 Testref; // 0x0
		::System::Int32 Goto; // 0x0
		::System::Int32 Prune; // 0x0
		::System::Int32 Stop; // 0x0
		::System::Int32 ECMABoundary; // 0x0
		::System::Int32 NonECMABoundary; // 0x0
		::System::Int32 Mask; // 0x0
		::System::Int32 Rtl; // 0x0
		::System::Int32 Back; // 0x0
		::System::Int32 Back2; // 0x0
		::System::Int32 Ci; // 0x0
		::Il2CppArray<::System::Object*>* Codes; // 0x10
		::Il2CppArray<::System::Object*>* Strings; // 0x18
		::System::Int32 TrackCount; // 0x20
		::System::Collections::Hashtable* Caps; // 0x28
		::System::Int32 CapSize; // 0x30
		Il2CppObject* FCPrefix; // 0x38
		::System::Text::RegularExpressions::RegexBoyerMoore* BMPrefix; // 0x50
		::System::Int32 Anchors; // 0x58
		::System::Boolean RightToLeft; // 0x5C

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, Il2CppObject* arg, ::System::Int32 arg, ::System::Collections::Hashtable* arg, ::System::Int32 arg, ::System::Text::RegularExpressions::RegexBoyerMoore* arg, Il2CppObject* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, Il2CppObject*, ::System::Int32, ::System::Collections::Hashtable*, ::System::Int32, ::System::Text::RegularExpressions::RegexBoyerMoore*, Il2CppObject*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCODE_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean OpcodeBacktracks(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCODE_OPCODEBACKTRACKS_OFFSET))(arg, nullptr);
		}

	};
}

