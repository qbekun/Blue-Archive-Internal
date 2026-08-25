#pragma once
#include "../unitysdk.h"

namespace FlatData { class ClanSocialGrade; }

namespace FlatData
{
	inline static constexpr unsigned int ClanSocialGrade_TypeDefinitionIndex = 9437;

	class ClanSocialGrade : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::ClanSocialGrade* None; // 0x0
		::FlatData::ClanSocialGrade* President; // 0x0
		::FlatData::ClanSocialGrade* Manager; // 0x0
		::FlatData::ClanSocialGrade* Member; // 0x0
		::FlatData::ClanSocialGrade* Applicant; // 0x0
		::FlatData::ClanSocialGrade* Refused; // 0x0
		::FlatData::ClanSocialGrade* Kicked; // 0x0
		::FlatData::ClanSocialGrade* Quit; // 0x0
		::FlatData::ClanSocialGrade* VicePredisident; // 0x0

	};
}

