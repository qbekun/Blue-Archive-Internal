#pragma once
#include "unitysdk.h"

class TooltipFactory;
class TooltipType;
namespace UnityEngine { class Transform; }

#define <GETASYNC>D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2746F20)
#define <GETASYNC>D__3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2747610)

	inline static constexpr unsigned int <GetAsync>d__3_TypeDefinitionIndex = 7236;

	class <GetAsync>d__3 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		TooltipFactory* __4__this; // 0x30
		TooltipType* type; // 0x38
		::UnityEngine::Transform* parent; // 0x40
		Il2CppObject* __u__1; // 0x48

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETASYNC>D__3_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <GETASYNC>D__3_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

