#pragma once
#include "unitysdk.h"

class CharacterVisual;
class TSSVisual;
namespace MX::Data::Excel { class TacticalSupportSystemExcel; }

#define <COSTARTINTERACTIONWITHTSS>D__185_.CTOR_OFFSET UNITYSDK_OFFSET(0x1201760)
#define <COSTARTINTERACTIONWITHTSS>D__185_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1201780)
#define <COSTARTINTERACTIONWITHTSS>D__185_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1201790)
#define <COSTARTINTERACTIONWITHTSS>D__185_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1201C60)
#define <COSTARTINTERACTIONWITHTSS>D__185_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1201C70)
#define <COSTARTINTERACTIONWITHTSS>D__185_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1201CC0)

	inline static constexpr unsigned int <CoStartInteractionWithTSS>d__185_TypeDefinitionIndex = 942;

	class <CoStartInteractionWithTSS>d__185 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		CharacterVisual* __4__this; // 0x20
		TSSVisual* tss; // 0x28
		::MX::Data::Excel::TacticalSupportSystemExcel* _tssExcel_5__2; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COSTARTINTERACTIONWITHTSS>D__185_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSTARTINTERACTIONWITHTSS>D__185_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSTARTINTERACTIONWITHTSS>D__185_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSTARTINTERACTIONWITHTSS>D__185_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSTARTINTERACTIONWITHTSS>D__185_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSTARTINTERACTIONWITHTSS>D__185_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

