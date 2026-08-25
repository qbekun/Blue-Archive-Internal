#pragma once
#include "unitysdk.h"

#define MISSIONTOASTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xB76200)

	inline static constexpr unsigned int MissionToastInfo_TypeDefinitionIndex = 8481;

	class MissionToastInfo : public Il2CppObject
	{
	public:
		::System::String* Message; // 0x10
		::System::String* PortraitPath; // 0x18
		::System::Single LifeTime; // 0x20
		::System::Int64 CurrentCount; // 0x28
		::System::Int64 TotalCount; // 0x30

		::System::Void .ctor(::System::String* str, ::System::String* str2, ::System::Single arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Single, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONTOASTINFO_.CTOR_OFFSET))(str, str2, arg, arg2, arg3, nullptr);
		}

	};

