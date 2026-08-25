#pragma once
#include "unitysdk.h"

class ErosionToPlay;
namespace MX::GameLogic::DBModel { class ConquestEventObjectDB; }

#define <>C__DISPLAYCLASS14_2_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BD8CB0)
#define <>C__DISPLAYCLASS14_2__PREPARECONQUESTDISPLAYINFOS_B__6_OFFSET UNITYSDK_OFFSET(0x1BD8CC0)

	inline static constexpr unsigned int <>c__DisplayClass14_2_TypeDefinitionIndex = 1478;

	class <>c__DisplayClass14_2 : public Il2CppObject
	{
	public:
		ErosionToPlay* erosionToPlay; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS14_2_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _PrepareConquestDisplayInfos_b__6(::MX::GameLogic::DBModel::ConquestEventObjectDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::ConquestEventObjectDB*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS14_2__PREPARECONQUESTDISPLAYINFOS_B__6_OFFSET))(arg, nullptr);
		}

	};

