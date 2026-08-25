#pragma once
#include "unitysdk.h"

#define <GETENTITYASYNC>D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x99CB230)
#define <GETENTITYASYNC>D__15_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x99CB630)

	inline static constexpr unsigned int <GetEntityAsync>d__15_TypeDefinitionIndex = 27839;

	class <GetEntityAsync>d__15 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::System::Type* ofObjectToReturn; // 0x30
		::System::Uri* absoluteUri; // 0x38
		::System::Xml::XmlUrlResolver* __4__this; // 0x40
		Il2CppObject* __u__1; // 0x48

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETENTITYASYNC>D__15_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <GETENTITYASYNC>D__15_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

