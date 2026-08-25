#pragma once
#include "unitysdk.h"

namespace MX::MinigameShooting { class MGSAudioController; }
class <>c__DisplayClass8_0;

#define <CREATEANIMATORAUDIOTABLE>D__8_.CTOR_OFFSET UNITYSDK_OFFSET(0x1464C10)
#define <CREATEANIMATORAUDIOTABLE>D__8_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x14654E0)
#define <CREATEANIMATORAUDIOTABLE>D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x14654F0)
#define <CREATEANIMATORAUDIOTABLE>D__8_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1465A40)
#define <CREATEANIMATORAUDIOTABLE>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1465A50)
#define <CREATEANIMATORAUDIOTABLE>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1465AA0)

	inline static constexpr unsigned int <CreateAnimatorAudioTable>d__8_TypeDefinitionIndex = 15088;

	class <CreateAnimatorAudioTable>d__8 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::String* aniControllerName; // 0x20
		Il2CppObject* complete; // 0x28
		::MX::MinigameShooting::MGSAudioController* __4__this; // 0x30
		<>c__DisplayClass8_0* __8__1; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CREATEANIMATORAUDIOTABLE>D__8_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATEANIMATORAUDIOTABLE>D__8_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATEANIMATORAUDIOTABLE>D__8_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATEANIMATORAUDIOTABLE>D__8_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATEANIMATORAUDIOTABLE>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATEANIMATORAUDIOTABLE>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

