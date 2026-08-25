#pragma once
#include "../../unitysdk.h"

namespace NPA::Editor::Java { class View; }
namespace UnityEngine { class Transform; }

#define NPA_EDITOR_NXDIALOG_ADDCLICKAREA_OFFSET UNITYSDK_OFFSET(0x9DA84D0)
#define NPA_EDITOR_NXDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DA8770)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXDialog_TypeDefinitionIndex = 26375;

	class NXDialog : public Il2CppObject
	{
	public:
		::NPA::Editor::Java::View* addClickArea(NXTouchArea* arg, ::UnityEngine::Transform* arg, Il2CppObject* arg)
		{
			return (return (::NPA::Editor::Java::View*(*)(NXTouchArea*, ::UnityEngine::Transform*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXDIALOG_ADDCLICKAREA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXDIALOG_.CTOR_OFFSET))(nullptr);
		}

	};
}

