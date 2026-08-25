#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class ProductBattlePassExcel; }

#define BATTLEPASSPRODUCTOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2189FC0)

	inline static constexpr unsigned int BattlePassProductObject_TypeDefinitionIndex = 4082;

	class BattlePassProductObject : public Il2CppObject
	{
	public:
		::MX::Data::Excel::ProductBattlePassExcel* Product; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSPRODUCTOBJECT_.CTOR_OFFSET))(nullptr);
		}

	};

