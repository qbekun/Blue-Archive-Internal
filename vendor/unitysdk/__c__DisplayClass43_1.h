#pragma once
#include "unitysdk.h"

class UIFormation;
class <>c__DisplayClass43_0;
namespace FlatData { class EchelonType; }
namespace FlatData { class EchelonExtensionType; }

#define <>C__DISPLAYCLASS43_1_.CTOR_OFFSET UNITYSDK_OFFSET(0xB60130)
#define <>C__DISPLAYCLASS43_1__ONCLICKENTER_B__10_OFFSET UNITYSDK_OFFSET(0xB60140)

	inline static constexpr unsigned int <>c__DisplayClass43_1_TypeDefinitionIndex = 8414;

	class <>c__DisplayClass43_1 : public Il2CppObject
	{
	public:
		UIFormation* ui; // 0x10
		<>c__DisplayClass43_0* CS$__8__locals1; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS43_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnClickEnter_b__10(::FlatData::EchelonType* arg, ::FlatData::EchelonExtensionType* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::FlatData::EchelonType*, ::FlatData::EchelonExtensionType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS43_1__ONCLICKENTER_B__10_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

