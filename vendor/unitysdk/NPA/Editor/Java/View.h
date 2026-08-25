#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_JAVA_VIEW_GETTAG_OFFSET UNITYSDK_OFFSET(0x9C3AAD0)
#define NPA_EDITOR_JAVA_VIEW_SETTAG_OFFSET UNITYSDK_OFFSET(0x9C3AAE0)
#define NPA_EDITOR_JAVA_VIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C3AAF0)

namespace NPA::Editor::Java
{
	inline static constexpr unsigned int View_TypeDefinitionIndex = 26794;

	class View : public Il2CppObject
	{
	public:
		::System::Int32 VISIBLE; // 0x0
		::System::Int32 INVISIBLE; // 0x0
		::System::Int32 GONE; // 0x0
		::System::Object* mTag; // 0x18

		::System::Object* getTag()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_JAVA_VIEW_GETTAG_OFFSET))(nullptr);
		}

		::System::Void setTag(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_JAVA_VIEW_SETTAG_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_JAVA_VIEW_.CTOR_OFFSET))(nullptr);
		}

	};
}

