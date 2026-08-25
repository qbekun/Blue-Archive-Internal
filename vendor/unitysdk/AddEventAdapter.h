#pragma once
#include "unitysdk.h"

#define ADDEVENTADAPTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x923A160)
#define ADDEVENTADAPTER_INVOKE_OFFSET UNITYSDK_OFFSET(0x923A270)

	inline static constexpr unsigned int AddEventAdapter_TypeDefinitionIndex = 24851;

	class AddEventAdapter : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ADDEVENTADAPTER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::System::Delegate* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Delegate*, ::PVOID))((::PBYTE)hIl2Cpp + ADDEVENTADAPTER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};

