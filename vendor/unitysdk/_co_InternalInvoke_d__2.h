#pragma once
#include "unitysdk.h"

class Scan;
namespace MXUnderCover { class UCEntity; }
namespace MXUnderCover { class SkillUseParameter; }

#define <CO_INTERNALINVOKE>D__2_.CTOR_OFFSET UNITYSDK_OFFSET(0xDA5400)
#define <CO_INTERNALINVOKE>D__2_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xDA5D00)
#define <CO_INTERNALINVOKE>D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDA5D10)
#define <CO_INTERNALINVOKE>D__2_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDA5FF0)
#define <CO_INTERNALINVOKE>D__2_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xDA6000)
#define <CO_INTERNALINVOKE>D__2_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDA6050)

	inline static constexpr unsigned int <co_InternalInvoke>d__2_TypeDefinitionIndex = 9852;

	class <co_InternalInvoke>d__2 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		Scan* __4__this; // 0x20
		::MXUnderCover::UCEntity* entity; // 0x28
		::MXUnderCover::SkillUseParameter* skillUseParameter; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_INTERNALINVOKE>D__2_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INTERNALINVOKE>D__2_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INTERNALINVOKE>D__2_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INTERNALINVOKE>D__2_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INTERNALINVOKE>D__2_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INTERNALINVOKE>D__2_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

