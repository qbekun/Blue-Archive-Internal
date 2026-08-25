#pragma once
#include "unitysdk.h"

#define <GETDYNAMICMEMBERNAMES>D__6_.CTOR_OFFSET UNITYSDK_OFFSET(0x96BD700)
#define <GETDYNAMICMEMBERNAMES>D__6_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x96BD850)
#define <GETDYNAMICMEMBERNAMES>D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x96BD860)
#define <GETDYNAMICMEMBERNAMES>D__6_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.STRING_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x96BDA00)
#define <GETDYNAMICMEMBERNAMES>D__6_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x96BDA10)
#define <GETDYNAMICMEMBERNAMES>D__6_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x96BDA60)
#define <GETDYNAMICMEMBERNAMES>D__6_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_SYSTEM.STRING_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x96BDA70)
#define <GETDYNAMICMEMBERNAMES>D__6_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x96BDB10)

	inline static constexpr unsigned int <GetDynamicMemberNames>d__6_TypeDefinitionIndex = 33557;

	class <GetDynamicMemberNames>d__6 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::String* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		MetaExpando* __4__this; // 0x28
		ExpandoData* _expandoData_5__2; // 0x30
		::System::Dynamic::ExpandoClass* _klass_5__3; // 0x38
		::System::Int32 _i_5__4; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETDYNAMICMEMBERNAMES>D__6_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETDYNAMICMEMBERNAMES>D__6_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETDYNAMICMEMBERNAMES>D__6_MOVENEXT_OFFSET))(nullptr);
		}

		::System::String* System.Collections.Generic.IEnumerator_System.String_.get_Current()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETDYNAMICMEMBERNAMES>D__6_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.STRING_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETDYNAMICMEMBERNAMES>D__6_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETDYNAMICMEMBERNAMES>D__6_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_System.String_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETDYNAMICMEMBERNAMES>D__6_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_SYSTEM.STRING_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETDYNAMICMEMBERNAMES>D__6_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

