#pragma once
#include "unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestDisplayInfo; }

#define <>C__DISPLAYCLASS202_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x23606F0)
#define <>C__DISPLAYCLASS202_0__COREFRESHSTATE_B__0_OFFSET UNITYSDK_OFFSET(0x2360700)
#define <>C__DISPLAYCLASS202_0__COREFRESHSTATE_B__1_OFFSET UNITYSDK_OFFSET(0x2360750)
#define <>C__DISPLAYCLASS202_0__COREFRESHSTATE_B__2_OFFSET UNITYSDK_OFFSET(0x23607A0)

	inline static constexpr unsigned int <>c__DisplayClass202_0_TypeDefinitionIndex = 5039;

	class <>c__DisplayClass202_0 : public Il2CppObject
	{
	public:
		Il2CppObject* tileMapEvents; // 0x10
		Il2CppObject* infosToFilter; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS202_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _CoRefreshState_b__0(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS202_0__COREFRESHSTATE_B__0_OFFSET))(arg, nullptr);
		}

		::System::Void _CoRefreshState_b__1(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS202_0__COREFRESHSTATE_B__1_OFFSET))(arg, nullptr);
		}

		::System::Boolean _CoRefreshState_b__2(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS202_0__COREFRESHSTATE_B__2_OFFSET))(arg, nullptr);
		}

	};

