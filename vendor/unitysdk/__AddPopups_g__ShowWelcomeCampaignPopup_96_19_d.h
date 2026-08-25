#pragma once
#include "unitysdk.h"

class <>c__DisplayClass96_19;

#define <<ADDPOPUPS>G__SHOWWELCOMECAMPAIGNPOPUP|96_19>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x2649D20)
#define <<ADDPOPUPS>G__SHOWWELCOMECAMPAIGNPOPUP|96_19>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2668EB0)
#define <<ADDPOPUPS>G__SHOWWELCOMECAMPAIGNPOPUP|96_19>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2668EC0)
#define <<ADDPOPUPS>G__SHOWWELCOMECAMPAIGNPOPUP|96_19>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2669180)
#define <<ADDPOPUPS>G__SHOWWELCOMECAMPAIGNPOPUP|96_19>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2669190)
#define <<ADDPOPUPS>G__SHOWWELCOMECAMPAIGNPOPUP|96_19>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x26691E0)

	inline static constexpr unsigned int <<AddPopups>g__ShowWelcomeCampaignPopup|96_19>d_TypeDefinitionIndex = 6678;

	class <<AddPopups>g__ShowWelcomeCampaignPopup|96_19>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		<>c__DisplayClass96_19* __8__1; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<ADDPOPUPS>G__SHOWWELCOMECAMPAIGNPOPUP|96_19>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ADDPOPUPS>G__SHOWWELCOMECAMPAIGNPOPUP|96_19>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ADDPOPUPS>G__SHOWWELCOMECAMPAIGNPOPUP|96_19>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ADDPOPUPS>G__SHOWWELCOMECAMPAIGNPOPUP|96_19>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ADDPOPUPS>G__SHOWWELCOMECAMPAIGNPOPUP|96_19>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ADDPOPUPS>G__SHOWWELCOMECAMPAIGNPOPUP|96_19>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

