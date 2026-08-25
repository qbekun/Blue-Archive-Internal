#pragma once
#include "unitysdk.h"

#define SECTIONGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x205E790)

	inline static constexpr unsigned int SectionGroup_TypeDefinitionIndex = 3383;

	class SectionGroup : public Il2CppObject
	{
	public:
		::System::Int64 GroupId; // 0x18
		::System::Int32 Probability; // 0x20
		::Il2CppArray<::System::Object*>* SpawnPoints; // 0x28
		::Il2CppArray<::System::Object*>* EndPoints; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SECTIONGROUP_.CTOR_OFFSET))(nullptr);
		}

	};

