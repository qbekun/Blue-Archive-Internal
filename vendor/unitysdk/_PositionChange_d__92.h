#pragma once
#include "unitysdk.h"

class HexaUnitVisual;
class CampaignTask;
namespace MX::Campaign { class HexLocation; }

#define <POSITIONCHANGE>D__92_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FFDA80)
#define <POSITIONCHANGE>D__92_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2004D10)
#define <POSITIONCHANGE>D__92_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2004D20)
#define <POSITIONCHANGE>D__92_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2005160)
#define <POSITIONCHANGE>D__92_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2005170)
#define <POSITIONCHANGE>D__92_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x20051C0)

	inline static constexpr unsigned int <PositionChange>d__92_TypeDefinitionIndex = 3110;

	class <PositionChange>d__92 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		HexaUnitVisual* receiveUnit; // 0x20
		CampaignTask* __4__this; // 0x28
		HexaUnitVisual* inputUnit; // 0x30
		::MX::Campaign::HexLocation* _receiveUnitDestPosition_5__2; // 0x38
		::MX::Campaign::HexLocation* _inputUnitDestPosition_5__3; // 0x44

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <POSITIONCHANGE>D__92_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <POSITIONCHANGE>D__92_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <POSITIONCHANGE>D__92_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <POSITIONCHANGE>D__92_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <POSITIONCHANGE>D__92_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <POSITIONCHANGE>D__92_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

