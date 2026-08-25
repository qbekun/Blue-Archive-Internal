#pragma once
#include "unitysdk.h"

class <>c;
class UIBase;

#define <>C_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1479560)
#define <>C_.CTOR_OFFSET UNITYSDK_OFFSET(0x14795E0)
#define <>C__COSTARTGAME_B__85_7_OFFSET UNITYSDK_OFFSET(0x14795F0)
#define <>C__LOADSCENE_B__91_2_OFFSET UNITYSDK_OFFSET(0x14796A0)

	inline static constexpr unsigned int <>c_TypeDefinitionIndex = 15153;

	class <>c : public Il2CppObject
	{
	public:
		<>c* __9; // 0x0
		::System::Action* __9__85_7; // 0x8
		Il2CppObject* __9__91_2; // 0x10

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _CoStartGame_b__85_7()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__COSTARTGAME_B__85_7_OFFSET))(nullptr);
		}

		::System::Boolean _LoadScene_b__91_2(UIBase* arg)
		{
			return ((::System::Boolean(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__LOADSCENE_B__91_2_OFFSET))(arg, nullptr);
		}

	};

