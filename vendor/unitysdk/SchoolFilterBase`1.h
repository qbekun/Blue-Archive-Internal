#pragma once
#include "unitysdk.h"

namespace FlatData { class School; }

#define SCHOOLFILTERBASE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCHOOLFILTERBASE`1_GET_ETCSCHOOLS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCHOOLFILTERBASE`1_GETSCHOOL_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int SchoolFilterBase`1_TypeDefinitionIndex = 2920;

	class SchoolFilterBase`1 : public ::MX::Logic::Actions::SeekPositionAction
	{
	public:
		::Il2CppArray<::System::Object*>* etcSchools; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHOOLFILTERBASE`1_.CTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_EtcSchools()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHOOLFILTERBASE`1_GET_ETCSCHOOLS_OFFSET))(nullptr);
		}

		::FlatData::School* GetSchool(::FlatData::School* arg)
		{
			return ((::FlatData::School*(*)(::FlatData::School*, ::PVOID))((::PBYTE)hIl2Cpp + SCHOOLFILTERBASE`1_GETSCHOOL_OFFSET))(arg, nullptr);
		}

	};

