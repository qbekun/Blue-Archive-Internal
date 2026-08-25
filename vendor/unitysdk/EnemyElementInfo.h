#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class CharacterExcel; }
namespace MX::Data::Excel { class CostumeExcel; }

#define ENEMYELEMENTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x23F3E50)

	inline static constexpr unsigned int EnemyElementInfo_TypeDefinitionIndex = 5420;

	class EnemyElementInfo : public Il2CppObject
	{
	public:
		::MX::Data::Excel::CharacterExcel* CharacterExcel; // 0x10
		::MX::Data::Excel::CostumeExcel* CostumeExcel; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEMYELEMENTINFO_.CTOR_OFFSET))(nullptr);
		}

	};

