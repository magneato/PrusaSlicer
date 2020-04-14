#ifndef SLAZIPFILEIMPORT_HPP
#define SLAZIPFILEIMPORT_HPP

#include "libslic3r/TriangleMesh.hpp"

#include <wx/string.h>

namespace Slic3r {

TriangleMesh import_model_from_sla_zip(const wxString &zipfname,
                                       Point windowsize = {4, 4});

}

#endif // SLAZIPFILEIMPORT_HPP
