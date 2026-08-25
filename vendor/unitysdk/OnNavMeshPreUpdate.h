#pragma once
#include "unitysdk.h"

#define ONNAVMESHPREUPDATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1B3630)
#define ONNAVMESHPREUPDATE_INVOKE_OFFSET UNITYSDK_OFFSET(0xA1B36F0)

	inline static constexpr unsigned int OnNavMeshPreUpdate_TypeDefinitionIndex = 37503;

	class OnNavMeshPreUpdate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONNAVMESHPREUPDATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNAVMESHPREUPDATE_INVOKE_OFFSET))(nullptr);
		}

	};

