#pragma once
#include "unitysdk.h"

namespace NPA::Editor::Plate { class NXPUserConsentListDialog; }
namespace NPA::SimpleJSON { class JSONNode; }
namespace NPA::Editor::Plate { class NXPUserConsentItem; }

#define <GETUSERCONSENTSTATE>D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9DC5680)
#define <GETUSERCONSENTSTATE>D__7_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9DC61B0)

	inline static constexpr unsigned int <GetUserConsentState>d__7_TypeDefinitionIndex = 26445;

	class <GetUserConsentState>d__7 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder* __t__builder; // 0x18
		::NPA::Editor::Plate::NXPUserConsentListDialog* __4__this; // 0x38
		::NPA::SimpleJSON::JSONNode* setListJson; // 0x40
		<>c__DisplayClass7_0* __8__1; // 0x48
		::System::Action* callback; // 0x50
		Il2CppObject* __7__wrap1; // 0x58
		::NPA::Editor::Plate::NXPUserConsentItem* _item_5__3; // 0x70
		::NPA::Editor::Plate::NXPUserConsentItem* __7__wrap3; // 0x78
		Il2CppObject* __u__1; // 0x80

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETUSERCONSENTSTATE>D__7_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <GETUSERCONSENTSTATE>D__7_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

