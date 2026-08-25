#pragma once
#include "unitysdk.h"

class HexaUnitVisual;
namespace MX::Campaign { class HexaTile; }
class CampaignTask;
class HexaTileVisual;
namespace UnityEngine { class Vector3; }

#define <COMOVE>D__45_.CTOR_OFFSET UNITYSDK_OFFSET(0xF82F50)
#define <COMOVE>D__45_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xF83F70)
#define <COMOVE>D__45_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xF83F80)
#define <COMOVE>D__45_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF850F0)
#define <COMOVE>D__45_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xF85100)
#define <COMOVE>D__45_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF85150)

	inline static constexpr unsigned int <CoMove>d__45_TypeDefinitionIndex = 859;

	class <CoMove>d__45 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		HexaUnitVisual* __4__this; // 0x20
		::MX::Campaign::HexaTile* dest; // 0x28
		::MX::Campaign::HexaTile* input; // 0x30
		::MX::Campaign::HexaTile* from; // 0x38
		CampaignTask* _campaignTask_5__2; // 0x40
		Il2CppObject* _moveStack_5__3; // 0x48
		Il2CppObject* _inputStack_5__4; // 0x50
		HexaTileVisual* _next_5__5; // 0x58
		::UnityEngine::Vector3* _startPosition_5__6; // 0x60
		::UnityEngine::Vector3* _endPosition_5__7; // 0x6C
		::System::Single _t_5__8; // 0x78

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COMOVE>D__45_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COMOVE>D__45_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COMOVE>D__45_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COMOVE>D__45_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COMOVE>D__45_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COMOVE>D__45_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

