#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class ConquestEventObjectDB; }
class ConquestTileVisual;

#define <>C__DISPLAYCLASS211_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x2357130)
#define <>C__DISPLAYCLASS211_0__DELETECONQUESTOBJECTVISUAL_B__0_OFFSET UNITYSDK_OFFSET(0x2361AD0)
#define <>C__DISPLAYCLASS211_0__DELETECONQUESTOBJECTVISUAL_B__1_OFFSET UNITYSDK_OFFSET(0x2361AF0)

	inline static constexpr unsigned int <>c__DisplayClass211_0_TypeDefinitionIndex = 5041;

	class <>c__DisplayClass211_0 : public Il2CppObject
	{
	public:
		::System::Int64 objectDBId; // 0x10
		::MX::GameLogic::DBModel::ConquestEventObjectDB* objectDB; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS211_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _DeleteConquestObjectVisual_b__0(::MX::GameLogic::DBModel::ConquestEventObjectDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::ConquestEventObjectDB*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS211_0__DELETECONQUESTOBJECTVISUAL_B__0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _DeleteConquestObjectVisual_b__1(ConquestTileVisual* arg)
		{
			return ((::System::Boolean(*)(ConquestTileVisual*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS211_0__DELETECONQUESTOBJECTVISUAL_B__1_OFFSET))(arg, nullptr);
		}

	};

