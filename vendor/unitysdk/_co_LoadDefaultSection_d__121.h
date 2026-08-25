#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCStage; }
namespace MXUnderCover { class UCSectionModel; }

#define <CO_LOADDEFAULTSECTION>D__121_.CTOR_OFFSET UNITYSDK_OFFSET(0xDB8040)
#define <CO_LOADDEFAULTSECTION>D__121_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xDB93F0)
#define <CO_LOADDEFAULTSECTION>D__121_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDB9450)
#define <CO_LOADDEFAULTSECTION>D__121___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xDB9C00)
#define <CO_LOADDEFAULTSECTION>D__121_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDB9C50)
#define <CO_LOADDEFAULTSECTION>D__121_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xDB9C60)
#define <CO_LOADDEFAULTSECTION>D__121_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDB9CB0)

	inline static constexpr unsigned int <co_LoadDefaultSection>d__121_TypeDefinitionIndex = 9981;

	class <co_LoadDefaultSection>d__121 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MXUnderCover::UCStage* __4__this; // 0x20
		::System::Boolean setStartPointToPlayer; // 0x28
		Il2CppObject* __7__wrap1; // 0x30
		::MXUnderCover::UCSectionModel* _sectionModel_5__3; // 0x48
		Il2CppObject* _op_5__4; // 0x50

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADDEFAULTSECTION>D__121_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADDEFAULTSECTION>D__121_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADDEFAULTSECTION>D__121_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADDEFAULTSECTION>D__121___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADDEFAULTSECTION>D__121_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADDEFAULTSECTION>D__121_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADDEFAULTSECTION>D__121_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

