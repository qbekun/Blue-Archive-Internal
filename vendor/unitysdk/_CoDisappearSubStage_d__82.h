#pragma once
#include "unitysdk.h"

class UIStageSelect;
namespace MX::GameLogic::DBModel { class CampaignSubStageSaveDB; }

#define <CODISAPPEARSUBSTAGE>D__82_.CTOR_OFFSET UNITYSDK_OFFSET(0xB1DFE0)
#define <CODISAPPEARSUBSTAGE>D__82_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xB236A0)
#define <CODISAPPEARSUBSTAGE>D__82_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB236B0)
#define <CODISAPPEARSUBSTAGE>D__82_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB23920)
#define <CODISAPPEARSUBSTAGE>D__82_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xB23930)
#define <CODISAPPEARSUBSTAGE>D__82_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB23980)

	inline static constexpr unsigned int <CoDisappearSubStage>d__82_TypeDefinitionIndex = 8249;

	class <CoDisappearSubStage>d__82 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIStageSelect* __4__this; // 0x20
		::MX::GameLogic::DBModel::CampaignSubStageSaveDB* _savedSubStage_5__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CODISAPPEARSUBSTAGE>D__82_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CODISAPPEARSUBSTAGE>D__82_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CODISAPPEARSUBSTAGE>D__82_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CODISAPPEARSUBSTAGE>D__82_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CODISAPPEARSUBSTAGE>D__82_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CODISAPPEARSUBSTAGE>D__82_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

