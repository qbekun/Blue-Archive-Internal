#pragma once
#include "unitysdk.h"

namespace MX::TableBoard { class TBGHexaMapData; }
namespace UnityEngine { class Transform; }
class <>c__DisplayClass20_0;

#define <MAKEHEXATILEMAP>D__20_.CTOR_OFFSET UNITYSDK_OFFSET(0x208EFB0)
#define <MAKEHEXATILEMAP>D__20_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2091760)
#define <MAKEHEXATILEMAP>D__20_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2091770)
#define <MAKEHEXATILEMAP>D__20_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2092190)
#define <MAKEHEXATILEMAP>D__20_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x20921A0)
#define <MAKEHEXATILEMAP>D__20_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x20921F0)

	inline static constexpr unsigned int <MakeHexaTileMap>d__20_TypeDefinitionIndex = 3476;

	class <MakeHexaTileMap>d__20 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::TableBoard::TBGHexaMapData* mapData; // 0x20
		::UnityEngine::Transform* parent; // 0x28
		::System::Boolean inGame; // 0x30
		<>c__DisplayClass20_0* __8__1; // 0x38
		Il2CppObject* completeCallBack; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <MAKEHEXATILEMAP>D__20_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <MAKEHEXATILEMAP>D__20_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <MAKEHEXATILEMAP>D__20_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <MAKEHEXATILEMAP>D__20_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <MAKEHEXATILEMAP>D__20_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <MAKEHEXATILEMAP>D__20_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

