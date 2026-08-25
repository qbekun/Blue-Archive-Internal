#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_DECLAREHORIZONTALGROUPATTRIBUTE_GET_SIZES_OFFSET UNITYSDK_OFFSET(0x9DCE580)
#define TRIINSPECTOR_DECLAREHORIZONTALGROUPATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCE590)
#define TRIINSPECTOR_DECLAREHORIZONTALGROUPATTRIBUTE_SET_SIZES_OFFSET UNITYSDK_OFFSET(0x9DCE600)

namespace TriInspector
{
	inline static constexpr unsigned int DeclareHorizontalGroupAttribute_TypeDefinitionIndex = 37812;

	class DeclareHorizontalGroupAttribute : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _Sizes_k__BackingField; // 0x18

		::Il2CppArray<::System::Object*>* get_Sizes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_DECLAREHORIZONTALGROUPATTRIBUTE_GET_SIZES_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_DECLAREHORIZONTALGROUPATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void set_Sizes(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_DECLAREHORIZONTALGROUPATTRIBUTE_SET_SIZES_OFFSET))(arg, nullptr);
		}

	};
}

