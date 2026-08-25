#pragma once
#include "unitysdk.h"

class UICharacterBasicInfo;

#define <<ONCLICKEQUIPGROWTH>G__SETREPEATERANDOPEN|51_0>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x22D7D20)
#define <<ONCLICKEQUIPGROWTH>G__SETREPEATERANDOPEN|51_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x22D83A0)
#define <<ONCLICKEQUIPGROWTH>G__SETREPEATERANDOPEN|51_0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x22D83B0)
#define <<ONCLICKEQUIPGROWTH>G__SETREPEATERANDOPEN|51_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x22D8530)
#define <<ONCLICKEQUIPGROWTH>G__SETREPEATERANDOPEN|51_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x22D8540)
#define <<ONCLICKEQUIPGROWTH>G__SETREPEATERANDOPEN|51_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x22D8590)

	inline static constexpr unsigned int <<OnClickEquipGrowth>g__SetRepeaterAndOpen|51_0>d_TypeDefinitionIndex = 4838;

	class <<OnClickEquipGrowth>g__SetRepeaterAndOpen|51_0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UICharacterBasicInfo* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKEQUIPGROWTH>G__SETREPEATERANDOPEN|51_0>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKEQUIPGROWTH>G__SETREPEATERANDOPEN|51_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKEQUIPGROWTH>G__SETREPEATERANDOPEN|51_0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKEQUIPGROWTH>G__SETREPEATERANDOPEN|51_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKEQUIPGROWTH>G__SETREPEATERANDOPEN|51_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKEQUIPGROWTH>G__SETREPEATERANDOPEN|51_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

