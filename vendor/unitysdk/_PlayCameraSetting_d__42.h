#pragma once
#include "unitysdk.h"

class ConquestEventDisplayer;
namespace MX::Conquest::ConquestTileMapEvent { class ConquestDisplayInfo; }

#define <PLAYCAMERASETTING>D__42_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BE2FB0)
#define <PLAYCAMERASETTING>D__42_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BE2FD0)
#define <PLAYCAMERASETTING>D__42_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BE2FE0)
#define <PLAYCAMERASETTING>D__42_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BE3060)
#define <PLAYCAMERASETTING>D__42_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1BE3070)
#define <PLAYCAMERASETTING>D__42_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BE30C0)

	inline static constexpr unsigned int <PlayCameraSetting>d__42_TypeDefinitionIndex = 1517;

	class <PlayCameraSetting>d__42 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		ConquestEventDisplayer* __4__this; // 0x20
		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* displayInfo; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYCAMERASETTING>D__42_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYCAMERASETTING>D__42_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYCAMERASETTING>D__42_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYCAMERASETTING>D__42_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYCAMERASETTING>D__42_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYCAMERASETTING>D__42_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

