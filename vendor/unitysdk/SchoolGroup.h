#pragma once
#include "unitysdk.h"

namespace FlatData { class School; }

#define SCHOOLGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x24E0AB0)
#define SCHOOLGROUP_GET_TOTALAVAILABLE_OFFSET UNITYSDK_OFFSET(0x24DFA20)
#define SCHOOLGROUP_GET_MAXMAIN_OFFSET UNITYSDK_OFFSET(0x24DFA90)
#define SCHOOLGROUP_GET_MAXSUPPORT_OFFSET UNITYSDK_OFFSET(0x24DFAD0)

	inline static constexpr unsigned int SchoolGroup_TypeDefinitionIndex = 5999;

	class SchoolGroup : public Il2CppObject
	{
	public:
		::FlatData::School* School; // 0x10
		Il2CppObject* MainCharacters; // 0x18
		Il2CppObject* SupportCharacters; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHOOLGROUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_TotalAvailable()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHOOLGROUP_GET_TOTALAVAILABLE_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxMain()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHOOLGROUP_GET_MAXMAIN_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxSupport()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHOOLGROUP_GET_MAXSUPPORT_OFFSET))(nullptr);
		}

	};

