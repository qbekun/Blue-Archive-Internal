#pragma once
#include "unitysdk.h"

namespace MXField::Shared::Data { class FieldInteractionInfo; }
namespace MXField::Shared::Data { class FieldInteractionData; }

#define <GETINTERACTIONINFOSWITHOUTSEASON>D__14_.CTOR_OFFSET UNITYSDK_OFFSET(0xE790D0)
#define <GETINTERACTIONINFOSWITHOUTSEASON>D__14_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xE7A150)
#define <GETINTERACTIONINFOSWITHOUTSEASON>D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE7A210)
#define <GETINTERACTIONINFOSWITHOUTSEASON>D__14___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xE7A610)
#define <GETINTERACTIONINFOSWITHOUTSEASON>D__14_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MXFIELD.SHARED.DATA.FIELDINTERACTIONINFO_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE7A6C0)
#define <GETINTERACTIONINFOSWITHOUTSEASON>D__14_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xE7A6D0)
#define <GETINTERACTIONINFOSWITHOUTSEASON>D__14_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE7A720)
#define <GETINTERACTIONINFOSWITHOUTSEASON>D__14_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MXFIELD.SHARED.DATA.FIELDINTERACTIONINFO_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xE7A730)
#define <GETINTERACTIONINFOSWITHOUTSEASON>D__14_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xE7A7E0)

	inline static constexpr unsigned int <GetInteractionInfosWithoutSeason>d__14_TypeDefinitionIndex = 10579;

	class <GetInteractionInfosWithoutSeason>d__14 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::MXField::Shared::Data::FieldInteractionInfo* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		Il2CppObject* uniqueIds; // 0x28
		Il2CppObject* __3__uniqueIds; // 0x30
		::MXField::Shared::Data::FieldInteractionData* __4__this; // 0x38
		Il2CppObject* __7__wrap1; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETINTERACTIONINFOSWITHOUTSEASON>D__14_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETINTERACTIONINFOSWITHOUTSEASON>D__14_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETINTERACTIONINFOSWITHOUTSEASON>D__14_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETINTERACTIONINFOSWITHOUTSEASON>D__14___M__FINALLY1_OFFSET))(nullptr);
		}

		::MXField::Shared::Data::FieldInteractionInfo* System.Collections.Generic.IEnumerator_MXField.Shared.Data.FieldInteractionInfo_.get_Current()
		{
			return ((::MXField::Shared::Data::FieldInteractionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETINTERACTIONINFOSWITHOUTSEASON>D__14_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MXFIELD.SHARED.DATA.FIELDINTERACTIONINFO_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETINTERACTIONINFOSWITHOUTSEASON>D__14_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETINTERACTIONINFOSWITHOUTSEASON>D__14_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_MXField.Shared.Data.FieldInteractionInfo_.GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETINTERACTIONINFOSWITHOUTSEASON>D__14_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MXFIELD.SHARED.DATA.FIELDINTERACTIONINFO_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETINTERACTIONINFOSWITHOUTSEASON>D__14_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

