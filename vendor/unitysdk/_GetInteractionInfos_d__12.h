#pragma once
#include "unitysdk.h"

namespace MXField::Shared::Data { class FieldInteractionInfo; }
namespace MXField::Shared::Data { class FieldInteractionData; }

#define <GETINTERACTIONINFOS>D__12_.CTOR_OFFSET UNITYSDK_OFFSET(0xE796B0)
#define <GETINTERACTIONINFOS>D__12_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xE79AB0)
#define <GETINTERACTIONINFOS>D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE79B70)
#define <GETINTERACTIONINFOS>D__12___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xE79F60)
#define <GETINTERACTIONINFOS>D__12_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MXFIELD.SHARED.DATA.FIELDINTERACTIONINFO_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE7A010)
#define <GETINTERACTIONINFOS>D__12_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xE7A020)
#define <GETINTERACTIONINFOS>D__12_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE7A070)
#define <GETINTERACTIONINFOS>D__12_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MXFIELD.SHARED.DATA.FIELDINTERACTIONINFO_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xE7A080)
#define <GETINTERACTIONINFOS>D__12_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xE7A140)

	inline static constexpr unsigned int <GetInteractionInfos>d__12_TypeDefinitionIndex = 10578;

	class <GetInteractionInfos>d__12 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::MXField::Shared::Data::FieldInteractionInfo* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::MXField::Shared::Data::FieldInteractionData* __4__this; // 0x28
		::System::Int64 seasonId; // 0x30
		::System::Int64 __3__seasonId; // 0x38
		Il2CppObject* uniqueIds; // 0x40
		Il2CppObject* __3__uniqueIds; // 0x48
		Il2CppObject* __7__wrap1; // 0x50

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETINTERACTIONINFOS>D__12_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETINTERACTIONINFOS>D__12_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETINTERACTIONINFOS>D__12_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETINTERACTIONINFOS>D__12___M__FINALLY1_OFFSET))(nullptr);
		}

		::MXField::Shared::Data::FieldInteractionInfo* System.Collections.Generic.IEnumerator_MXField.Shared.Data.FieldInteractionInfo_.get_Current()
		{
			return ((::MXField::Shared::Data::FieldInteractionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETINTERACTIONINFOS>D__12_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MXFIELD.SHARED.DATA.FIELDINTERACTIONINFO_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETINTERACTIONINFOS>D__12_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETINTERACTIONINFOS>D__12_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_MXField.Shared.Data.FieldInteractionInfo_.GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETINTERACTIONINFOS>D__12_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MXFIELD.SHARED.DATA.FIELDINTERACTIONINFO_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETINTERACTIONINFOS>D__12_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

