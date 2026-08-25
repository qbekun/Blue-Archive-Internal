#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Rect; }

#define TMPRO_TMP_SELECTIONCARET_.CTOR_OFFSET UNITYSDK_OFFSET(0xA174EE0)
#define TMPRO_TMP_SELECTIONCARET_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0xA174EF0)
#define TMPRO_TMP_SELECTIONCARET_CULL_OFFSET UNITYSDK_OFFSET(0xA174F00)

namespace TMPro
{
	inline static constexpr unsigned int TMP_SelectionCaret_TypeDefinitionIndex = 33715;

	class TMP_SelectionCaret : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SELECTIONCARET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void UpdateGeometry()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SELECTIONCARET_UPDATEGEOMETRY_OFFSET))(nullptr);
		}

		::System::Void Cull(::UnityEngine::Rect* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SELECTIONCARET_CULL_OFFSET))(arg, arg, nullptr);
		}

	};
}

