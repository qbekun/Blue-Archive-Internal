#pragma once
#include "unitysdk.h"

class NoiseMaker;
namespace MXUnderCover { class SkillUseParameter; }
namespace MXUnderCover { class UCEntity; }
class <>c__DisplayClass4_0;

#define <CO_INTERNALINVOKE>D__4_.CTOR_OFFSET UNITYSDK_OFFSET(0xDA17B0)
#define <CO_INTERNALINVOKE>D__4_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xDA1970)
#define <CO_INTERNALINVOKE>D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDA1980)
#define <CO_INTERNALINVOKE>D__4_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDA1C30)
#define <CO_INTERNALINVOKE>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xDA1C40)
#define <CO_INTERNALINVOKE>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDA1C90)

	inline static constexpr unsigned int <co_InternalInvoke>d__4_TypeDefinitionIndex = 9840;

	class <co_InternalInvoke>d__4 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		NoiseMaker* __4__this; // 0x20
		::MXUnderCover::SkillUseParameter* skillUseParameter; // 0x28
		::MXUnderCover::UCEntity* entity; // 0x30
		<>c__DisplayClass4_0* __8__1; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_INTERNALINVOKE>D__4_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INTERNALINVOKE>D__4_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INTERNALINVOKE>D__4_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INTERNALINVOKE>D__4_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INTERNALINVOKE>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INTERNALINVOKE>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

